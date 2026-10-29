#include <stdio.h>
#include "mathlib.h"

int main(void) {
    int m = maior(10, 20);
    long long f = fatorial(5);

    printf("Maior: %d\n", m);
    printf("Fatorial: %lld\n", f);

    return 0;
}