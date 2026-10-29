#include <stdio.h>

void trocar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

int main(void){
    int x, y;
    printf("digite os valores que desejas trocar de posição: ");
    scanf("%d %d", &x, &y);
    trocar(&x, &y);
    printf(("%d %d"), x, y);
    return 0;

}

