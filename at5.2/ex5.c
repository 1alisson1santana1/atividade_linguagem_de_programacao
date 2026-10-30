#include <stdio.h>

int main(void){
    int v[4];
    for(int i=0;i<4;i++){
        printf("o endereço de v[%d] é %p\n",i ,(void*)&v[i]);
    }
    double d[4];
    for(int j=0;j<4;j++){
        printf("o endereço de v[%f] é %p\n",j ,(void*)&d[j]);
    }
    return 0;
}