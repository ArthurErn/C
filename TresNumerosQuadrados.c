#include<stdio.h>

int main(){
    int num1, num2, num3, num1q, num2q, num3q, soma;

    printf("digite o primeiro valor:\n");
    scanf("%d", &num1);

    printf("digite o segundo valor:\n");
    scanf("%d", &num2);

    printf("digite o terceiro valor:\n");
    scanf("%d", &num3);

    num1q = num1 * num1;

    num2q = num2 * num2;

    num3q = num3 * num3;

    soma = num3q + num2q + num1q;

    printf("A soma dos tres digitos ao quadrado eh:\n");
    printf("%d", soma);

    return 0;

}
