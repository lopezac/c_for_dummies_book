#include <ctype.h>
#include <stdio.h>

void print_stars(int size);

int main() {
    char phrase[] = "qpdfview 0.5.0\n"
        "qpdfview is a tabbed document viewer using Qt.\n"
        "This version includes:\n"
        "PDF support using Poppler 23.02.0\n"
        "PS support using libspectre 0.2.12\n"
        "PDF support using Fitz \n"
        "Printing support using CUPS 2.4.6\n"
        "See launchpad.net/qpdfview for more information.\n"
        "2012-2018 The qpdfview developers";
    // char phrase[] = "qpdfview 0.5.0 qpdfview is a tabbed document viewer using Qt. This version includes: PDF support using Poppler 23.02.0  PS support using libspectre 0.2.12 DjVu support using DjVuLibre 3.5.28 PDF support using Fitz Printing support using CUPS 2.4.6 See launchpad.net/qpdfview for more information. 2012-2018 The qpdfview developers";

    int index, alpha, space, punct, upper, lower, digit;

    alpha = space = punct = upper = lower = digit = 0;

    // gather data
    for (index = 0; phrase[index]; index++) {
        if (isalpha(phrase[index]))
            alpha++;
        if (isspace(phrase[index]))
            space++;
        if (ispunct(phrase[index]))
            punct++;
        if (islower(phrase[index]))
            lower++;
        if (isupper(phrase[index]))
            upper++;
        if (isdigit(phrase[index]))
            digit++;
    }

    // print results
    printf("\"%s\"\n\n", phrase);
    puts("Statistics:");
    print_stars(alpha);
    printf(" %d alphabetic characters\n", alpha);
    print_stars(space);
    printf(" %d spaces\n", space);
    print_stars(punct);
    printf(" %d punctuation symbols\n", punct);
    print_stars(lower);
    printf(" %d lowercase characters\n", lower);
    print_stars(upper);
    printf(" %d uppercase characters\n", upper);
    print_stars(digit);
    printf(" %d digit characters symbols\n", digit);

    return(0);
}

void print_stars(int size) {
    int x;

    for (x = 0; x < size; x += 4)
        putchar('*');
}
