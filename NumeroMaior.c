#include <stdio.h>

    int main(){
        
        int numero, inf, maior = 0, cont = 0, aux;
        
        printf("Quantos numeros?\n");
        scanf("%d", &inf);
            
        for(int i = 0; i < inf; i++){
            printf("Informe os numeros\n");
            scanf("%d", &numero);
            
            if(i == 0){
                maior = numero;
            }
            if(maior == numero){
                cont++;
            }
            
            if(numero > maior){
                cont = 0;
                maior = numero;
                cont++;;
            }
            
            
        }
        
        printf("O maior numero é %d e foi digitado %d vezes.", maior, cont);

        
    return 0;
    }
    
