#include <stdio.h>
#include <time.h>

char *get_weekday(int wday) {
    char *name;
    enum WEEKDAYS { sun, mon, tue, wed, thu, fri, sat };

    switch (wday) {
    case sun:
        name = "Sunday";
        break;
    case mon:
        name = "Monday";
        break;
    case tue:
        name = "Tuesday";
        break;
    case wed:
        name = "Wednesday";
        break;
    case thu:
        name = "Thursday";
        break;
    case fri:
        name = "Friday";
        break;
    case sat:
        name = "Saturday";
    }

    return name;
}

int main() {
    time_t tictoc;
    struct tm *today;

    time(&tictoc);
    today = localtime(&tictoc);
    printf("Today is %d/%d/%d\n",
           today->tm_mday,
           1 + today->tm_mon,
           1900 + today->tm_year);
    if (today->tm_hour > 12)
        printf("Time is %d:%02d:%02d PM\n",
               today->tm_hour - 12,
               today->tm_min,
               today->tm_sec);
    else
        printf("Time is %d:%02d:%02d AM\n",
               today->tm_hour,
               today->tm_min,
               today->tm_sec);
    printf("Today is %s\n", get_weekday(today->tm_wday));

    return (0);
}
