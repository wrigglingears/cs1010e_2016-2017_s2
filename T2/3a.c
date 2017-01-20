#include <math.h>
#include <stdio.h>

int main(void) {
    double S1, S2, S3, area, p;

    // Read input
    scanf("%lf %lf %lf", &S1, &S2, &S3);

    // Compute area
    p = (S1 + S2 + S3) / 2.0;
    area = sqrt(p * (p - S1) * (p - S2) * (p - S3));

    // Print area
    printf("Area: %.3lf", area);

    return 0;
}