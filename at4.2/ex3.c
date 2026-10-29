#include <stdio.h>
void divmod(int a, int b, int *q, int *r){
    *q = a/b ;
    *r = a - (b * *q);
}

int main(void){
    int x, y, z, w;
    printf("Digite o número que deseja dividir: ");
    scanf("%d %d", &x, &y);
    divmod(x, y, &z, &w);
    printf("A divisão de %d por %d resulta em %d com resto %d\n", x, y, z, w);
    return 0;

}