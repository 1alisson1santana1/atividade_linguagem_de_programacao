#include <stdio.h>

void echo(void) {
    char buf[8];
    fgets(buf, sizeof(buf), stdin); // PERIGOSO: nao limita o tamanho
    printf("Voce digitou: %s\n", buf);
}
int main(void) {
echo();
return 0;
}
