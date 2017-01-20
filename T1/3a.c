#include <stdio.h>

int main(void) {
    double balance, rate;

    // Get input
    scanf("%lf %lf", &balance, &rate);

    // Calculate first year
    balance = balance + balance * rate / 100.0;
    // Calculate second year
    balance = balance + balance * rate / 100.0;
    // Calculate third year
    balance = balance + balance * rate / 100.0;

    // Print result
    printf("Final balance %lf", balance);

    return 0;
}