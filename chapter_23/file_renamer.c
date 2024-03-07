// THIS IS A RESTORE THAT I COULD RECOVER WITH GIT
// ORIGINAL VERSION WAS DELETED AND I WAS NOT CAREFUL WITH
// NOT DELETING ORIGINAL FILE, TOOK ME ALMOST 2 HOURS, BUT WITH THE rename
// FUNCTION I DELETED IT, SO IM NOT GONNA DO IT AGAIN
// IT WAS SUPPOSED TO CHANGE EVERY exercise_{number}.c to ex_{number}.c
// IT WORKED BUT deleted every other file and I didnt git commit so it was lost
// by some error
#include <stdio.h>
#include <string.h>

int starts_with(char *filename, char *word);
char *get_maintaned(char *filename, char *ignored);

#define OLD "exercise_"
#define NEW "ex_"

int main() {
    char *filename = "exercise_5.c";
    char *word = OLD;

    printf("filename %s starts with word %s = %s\n",
           filename, word, starts_with(filename, word) ? "yes" : "no");
    printf("filename %s ignoring %s is %s\n",
           filename, word, get_maintaned(filename, word));

    return (0);
}

int starts_with(char *filename, char *word) {
    while (*word == *filename) {
        filename++;
        word++;

        if (*word == '\0')
            return 1;
    }

    return 0;
}

char *get_maintaned(char *filename, char *ignored) {
    size_t length;
    length = sizeof(char) * strlen(filename) - sizeof(char) * strlen(ignored);
    char word[length + 1];

    printf("Length to get is %ld\n", length);

    while (*ignored == *filename) {
        filename++;
        ignored++;

        if (*ignored == '\0') {
            while (*filename) {
                word[x++] = *filename++;
            }
        }
    }

    return 0;
}
