#include <stdio.h>

int main() {
    int mod = -3 % 2;
    printf("-3 = 0x%x\n", -3);
    printf("%d\n%x\n", mod, mod);
    printf("%d\n", (-3) >> 1);
    printf("%d\n", (-3) / 2);
    return 0;
}