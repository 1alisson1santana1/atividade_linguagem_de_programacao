#include <stdio.h>

int main(void) {
    int v[5];
    int i, j, m;
    int soma = 0;
    int media;
    int maior;

    for (i = 0; i < 5; i++) {
        printf("Digite o número %d da lista: ", i + 1);
        scanf("%d", &v[i]);
    }

    maior = v[0];
    for (j = 1; j < 5; j++) {
        if (v[j] > maior) {
            maior = v[j];
        }
    }

    for (m = 0; m < 5; m++) {
        soma += v[m];
    }

    media = soma / 5;

    printf("\nA soma é %d e a média é %d\n", soma, media);
    printf("O maior número é %d\n", maior);

    return 0;
}
