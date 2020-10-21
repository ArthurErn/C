#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, numi, numf;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    while(num < 0){
        printf("digite o numero novamente\n");
        scanf("%d", &num);
    }

    if(num > 0 && num < 100){
        numi = num / 10 %10;
        numf = num / 1 %10;
        num = numi + numf;
        printf("A soma dos numeros digitados é de %d", num);


    }else{
        printf("numero invalido");
    }
    return 0;
}
