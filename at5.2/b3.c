#include <stdio.h>

int main(void) {
    char palavra[100];

    printf("Digite uma palavra para ser revertida: ");
    scanf("%99s", palavra);

    // Calcula o tamanho percorrendo até o caractere nulo ('\0')
    int tamanho_palavra = 0;
    while (palavra[tamanho_palavra] != '\0') {
        tamanho_palavra++;
    }

    printf("A palavra revertida é: ");
    for (int i = tamanho_palavra - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");

    return 0;
}
