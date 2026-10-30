#include <stdio.h>

int maior(int a, int b){
    if (a > b){
        return a;
    }
    else {
        return b;
    }
}

int fatorial(int n){
    if (n <= 0){
        return 1;
    }
    else{
        return n * fatorial(n-1);
    }
}

int main(void){
    int x, y, z;
    printf("digite o número que deseja comparar: \n");
    scanf("%d %d", &x, &y);
    printf("digite o número que deseja fatorar: \n");
    scanf("%d", &z);
    printf("O maior número entre %d e %d é %d.\n", x, y, maior(x, y));
    printf("o fartorial de %d é %d\n", z, fatorial(z));
    return 0;
}
