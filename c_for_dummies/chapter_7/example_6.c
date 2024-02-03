#include <stdio.h>

int main()
{
    float fav;
    char word[15];

    printf("What is your favorite float number: ");
    scanf("%f", &fav);

    getchar();
    printf("What is your favorite word: ");
    scanf("%s", word);

    putchar('\n');
    printf("%.1f is my favorite number, too!\n", fav);
    printf("%s is my favorite word, too!\n", word);
    putchar('\n');

    return(0);
}