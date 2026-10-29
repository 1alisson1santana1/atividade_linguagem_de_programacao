#include <stdio.h>

long soma_rec(int n){
    if (n <= 0){
        return 0;
    }
    return n + soma_rec(n - 1);
    
}
long soma_iter(int n){
    long soma = 0;
    for (int i = 1; i <= n; i++){
        soma += i;   
    }
    return soma;
}

int main (void){
    int x;
    printf("Digite o número que deseja somar: \n");
    scanf("%d", &x);
    printf("Em interativo fica %d\n", soma_iter(x));
    printf("Em recursiva fica %d\n", soma_rec(x));

    
}
