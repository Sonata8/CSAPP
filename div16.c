#include <stdio.h>

int div16(int n) {
    int bias = (n >> 31) & 0xF;
    return (n + bias) >> 4;
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", div16(x));
    return 0;
}