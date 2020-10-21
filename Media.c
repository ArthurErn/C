#include <stdio.h>

    int main(){

        int numero = 0, auxiliar = 0, cont = 0;
        float media = 0;
        
            for(int i = 1; i <= 5; i++){
                printf("Informe o %dº numero:\n", i);
                scanf("%d", &numero);
                
                if(numero > 0){
                    auxiliar = auxiliar + numero;
                    cont = cont + 1;
                }
            }
            
        media = auxiliar / cont;
        printf("A media é %.2f", media);
            
    return 0;
    }
    
