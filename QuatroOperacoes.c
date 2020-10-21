#include <stdio.h>
#include <stdlib.h>

int main()
{
    float res, sub, mult, divi, n1, n2;
    int num;

    printf("Informe um numero \n");
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    scanf("%d", &num);
    
    if(num >= 1 && num <= 4){
        printf("Escolha o primeiro numero: ");
        scanf("%f", &n1);
        printf("Escolha o segundo numero: ");
        scanf("%f", &n2);
    
       switch (num){
            case 1:
                res = n1 + n2;
                printf("A soma do %.2f e %.2f é de %.2f", n1, n2, res);
                break;
            case 2:
                res = n1 - n2;
                printf("A diferenca de %.2f e %.2f é de %.2f", n1, n2, res);
                break;
            case 3:
                res = n1 * n2;
                printf("A multiplicacao do %.2f e %.2f é de %.2f", n1, n2, res);
                break;
            case 4:
                if(n2 == 0){
                    printf("impossivel fazer essa divisao");
                }else{
                    res = n1 / n2;
                    printf("A divisao do %.2f e %.2f é de %.2f", n1, n2, res);
                    break;
                }
        }
    }else{
        printf("numero invalido");
    }
    return 0;
}
