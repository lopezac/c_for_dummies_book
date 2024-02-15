#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct bono {
    char symbol[5];
    int quantity;
    float share;
    struct bono *next;
};
struct bono *current;
struct bono *first;

struct bono *make_bono(void);
void add_bono(void);
void show_bono(struct bono *a);
void show_bonos(void);
void fill_bono(struct bono *a);
void load_bonos(void);
void write_bonos(void);

int main() {
    char option;
    long filep;

    first = NULL;
    load_bonos();
    while (option != 'Q') {
        printf("A)dd S)how Q)uit: ");
        scanf("%c", &option);
        option = toupper(option);
        while (getchar() != '\n')
            ;
        putchar('\n');

        switch (option) {
        case ('A'):
            add_bono();
            break;
        case ('S'):
            show_bonos();
            break;
        case ('Q'):
            write_bonos();
            break;
        }
        putchar('\n');
    }

    return (0);
}

void load_bonos(void) {
    struct bono *previous;
    long fpos;
    int r;
    FILE *fh;

    fh = fopen("bonos.dat", "r");
    if (!fh)
        return;

    while (!feof(fh)) {
        current = make_bono();
        r = fread(current, sizeof(struct bono), 1, fh);
        if (r == 0) 
            break;
        if (fpos == 0)
            first = current;
        else 
            previous->next = current; 
        previous = current;
        current = current->next;
        fpos = ftell(fh);
        printf("fpos %lu\n", fpos);
    } 
    current = first;

    fclose(fh);
}

void write_bonos(void) {
    FILE *fh;

    fh = fopen("bonos.dat", "w");
    while (current) {
        fwrite(current, sizeof(struct bono), 1, fh);
        current = current->next;
    }

    fclose(fh);
}

void add_bono() {
    if (first == NULL) {
        current = make_bono();
        fill_bono(current);
        first = current; 
    } 
    else {
        while (current->next)
            current = current->next;
        current->next = make_bono();
        fill_bono(current->next);
        current = current->next;
    }
    current->next = NULL;
}

void fill_bono(struct bono *a) {
    puts("Enter bono data:");
    printf("Bono symbol: ");
    scanf("%s", a->symbol);

    printf("Bono quantity: ");
    scanf("%d", &a->quantity);

    printf("Bono share: ");
    scanf("%f", &a->share);

    while (getchar() != '\n')
        ;
}

void show_bonos(void) {
    current = first;
    if (current == NULL) {
        puts("Empty");
        return;
    }

    puts("Bono Portfolio");
    puts("Symbol\tQuantity\tShare\tPrice");

    while (current) {
        show_bono(current);
        current = current->next;
    }
    current = first;
}

void show_bono(struct bono *a) {
    printf("%6s\t%8d\t%5.1f\t%5.1f\n", a->symbol, a->quantity, a->share,
           a->quantity * a->share);
}

struct bono *make_bono(void) {
    struct bono *a;

    a = (struct bono*)malloc(sizeof(struct bono)); 
    if (a == NULL) {
        puts("Some malloc() error");
        exit(1);
    }

    return a;
}
