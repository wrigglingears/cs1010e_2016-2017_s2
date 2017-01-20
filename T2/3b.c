#include <math.h>
#include <stdio.h>

int main(void) {
    double balance, rate;
    int month;
    int year;

    // Read input
    scanf("%lf %lf %d", &balance, &rate, &month);

    year = month / 12;

    // Compute balance
    balance = balance * pow(1.0 + rate / 100.0, year);

    // Print balance
    printf("Balance: %.2lf", balance);

    return 0;
}