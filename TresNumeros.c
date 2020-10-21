#include<stdio.h>

int main(){
    float num1, num2, num3, soma;

    printf("informe o primeiro numero:");
    scanf("%f", &num1);

    printf("informe o segundo numero:");
    scanf("%f", &num2);

    printf("informe o terceiro numero:");
    scanf("%f", &num3);
    soma = num1 + num2 + num3;

    printf("%.2f", soma);

    return 0;

}
