#include "mathlib.h"

int maior(int a, int b) {
    return (a > b) ? a : b;
}

long long fatorial(int n) {
    if (n <= 1) return 1;
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}