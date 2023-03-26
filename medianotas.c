#include <stdio.h>

int main() {
    float nota, soma = 0, media;
    int num_notas = 0;

    printf("Digite as notas (digite um valor negativo para parar):\n");

    while (1) {
        printf("Nota %d: ", num_notas + 1);
        scanf("%f", &nota);

        if (nota < 0) {
            break;
        }

        soma += nota;
        num_notas++;
    }

    if (num_notas == 0) {
        printf("Nenhuma nota informada.\n");
        return 0;
    }

    media = soma / num_notas;

    printf("A média das %d notas informadas é %.2f\n", num_notas, media);

    return 0;
}