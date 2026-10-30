#include <stdio.h>

int main(void){
    int v[10]={0,1,2,3,4,5,6,7,8,9};
    for(int i=0; i <= 11; i++ ){
        printf("%d", v[i]);
    }
    return 0;
}

/*Pergunta: o programa "funcionava" sem o -fsanitize=address ? O que o sanitizer mudou?

R= O programan funcionava sem o -fsanitize=address, mas imprimia os valores dos endereços logo em seguida. Porém, com o sanitizer ele envoltou a os bytes do array com bytes envenenados e utilizou um checagem em tempo de execução que verifica quando o array tenta ultrapassar o limite definido pelas redzone.



*/