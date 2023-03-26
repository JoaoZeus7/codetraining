#include <stdio.h>

int main() {
    int num, i, primo = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            primo = 0; // não é primo
            break;
        }
    }

    if (primo == 1) {
        printf("%d é primo.", num);
    } else {
        printf("%d não é primo.", num);
    }

    return 0;
}