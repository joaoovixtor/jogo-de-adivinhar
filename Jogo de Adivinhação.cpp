#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, tentativa;

    srand(time(NULL));

    numero = rand() % 100 + 1;

    printf("===== JOGO DE ADIVINHACAO =====\n");

    do {
        printf("Digite um numero de 1 a 100: ");
        scanf("%d", &tentativa);

        if (tentativa < numero)
            printf("Tente um numero maior!\n");

        else if (tentativa > numero)
            printf("Tente um numero menor!\n");

        else
            printf("Parabens! Voce acertou!\n");

    } while (tentativa != numero);

    return 0;
}
