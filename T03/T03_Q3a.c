#include <stdio.h>
#define SUN 0
#define MON 1
#define TUE 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6

#define JAN 1
#define FEB 2
#define MAR 3
#define APR 4
#define MAY 5
#define JUN 6
#define JUL 7
#define AUG 8
#define SEP 9
#define OCT 10
#define NOV 11
#define DEC 12

int main(void) {
    int day, month, weekday = 0;

    // Read input
    scanf("%d %d", &day, &month);

    // Add up the total number of days in the full months that have elapsed
    switch (month) {
    case DEC:
        weekday += 30;
    case NOV:
        weekday += 31;
    case OCT:
        weekday += 30;
    case SEP:
        weekday += 31;
    case AUG:
        weekday += 31;
    case JUL:
        weekday += 30;
    case JUN:
        weekday += 31;
    case MAY:
        weekday += 30;
    case APR:
        weekday += 31;
    case MAR:
        weekday += 28;
    case FEB:
        weekday += 31;
    }

    // Add number of days in the current month that have elapsed
    // -1 because first day is actually day 0
    weekday += day - 1;

    // Calculate day of the week;
    weekday %= 7;

    // Print result
    switch(weekday) {
    case SUN:
        printf("Sunday");
        break;
    case MON:
        printf("Monday");
        break;
    case TUE:
        printf("Tuesday");
        break;
    case WED:
        printf("Wednesday");
        break;
    case THU:
        printf("Thursday");
         break;
    case FRI:
        printf("Friday");
        break;
    case SAT:
        printf("Saturday");
        break;
    }
    return 0;
}