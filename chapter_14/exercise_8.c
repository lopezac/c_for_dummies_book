#include <stdio.h>
#include <string.h>

int main() {
    struct date {
        int month;
        int day;
        int year;
    };
    struct id {
        char first[22];
        char last[22];
    };
    struct human {
        struct id name; 
        struct date birthday;
    };
    struct human president;

    strcpy(president.name.first, "Bernardino");
    strcpy(president.name.last, "Rivadavia");
    president.birthday.day = 20;
    president.birthday.month = 5;
    president.birthday.year = 1780;

    printf("%s %s was born on %d/%d/%d\n",
           president.name.first,
           president.name.last,
           president.birthday.day,
           president.birthday.month,
           president.birthday.year);

    return (0);
}
