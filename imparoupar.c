#include <stdio.h>

int main(){
    int num = 0;
    printf("par ou impar checker\n");
    printf("insira um numero para verificar se ele é impar ou par\n");
    scanf("%i",&num);

    if (num % 2 == 0){
        printf("%d é par\n", num);
    } 
    else {
        printf("%d não é par\n", num);
    }

    return 0;
}