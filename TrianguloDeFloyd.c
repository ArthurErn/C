#include<stdio.h>

int main()
{
    int num, aux = 0;
    
    printf("Escreva um numero ");
    scanf("%d", &num);
    
        for(int i = 0; i <= (num + 1); i++){
            printf("\n");
            for(int j = 1; j <= (num + 1); j++){
                if(i > j){
                    aux = aux + 1;
                    printf("%d ", aux);
                }
            }
        }
    return 0;
}
