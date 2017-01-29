#include <stdio.h>

int main(void) {
    double balance, rate;

    // Get input
    scanf("%lf %lf", &balance, &rate);

    // Calculate first year
    balance = balance + balance * rate / 100.0;
    printf("%.2lf\n", balanc);
    // Calculate second year
    balance = balance + balance * rate / 100.0;
    printf("%.2lf\n", balance)
    // Calculate third year
    /* balance = balance + balance * rate / 100.0; */

    // Print result
    printf("%.2lf\n", balance);

    return 0;
}
