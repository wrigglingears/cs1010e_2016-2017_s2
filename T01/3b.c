#include <stdio.h>

int main(void) {
    double balance, rate;
    int month;
    int year;

    // Get input
    scanf("%lf %lf %d", &balance, &rate, &month);

    // Get whole number of years
    year = month / 12;

    // Add interest
    balance = balance + year * balance * rate / 100.0;

    // Print result
    printf("%.2lf\n", balance);

    return 0;
}