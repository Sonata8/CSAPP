#include <stdio.h>

int main() {
    double N = 2e400;
    double M = -2e400;
    printf("%lf %lf\n", N, M);
    printf("%lf %lf\n", 1.0/N, 1.0/M);
    return 0;
}