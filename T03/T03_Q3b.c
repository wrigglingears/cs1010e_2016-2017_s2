#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int year;
    bool leap;

    // Get input
    scanf("%d", &year);

    // Multiple checks
    if (year % 400 == 0) {
        leap = true;
    }
    else if (year % 100 == 0) {
        leap = false;
    }
    else if (year % 4 == 0) {
        leap = true;
    }
    else {
        leap = false;
    }

    // Single check
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        leap = true;
    }
    else {
        leap = false;
    }

    // Print result
    printf("%d is%sleap\n", year, leap ? " " : " not ");

    return 0;
}