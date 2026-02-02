#include <stdio.h>
#include <assert.h>

int work(int x) {
    return !(x ^ 0xFFFFFFFF) || !x || 
            !((x & 0xFF) ^ 0xFF) || !((x >> 24 & 0xFF) & 0xFF);
}

int main() {
    int x = 0xF0000000;
    assert(work(x) == 1);
    return 0;
}