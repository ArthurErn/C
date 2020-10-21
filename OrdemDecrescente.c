#include <stdio.h>

    int main(){
        
        int numero;
        
            printf("informe um numero\n");
            scanf("%d", &numero);
            if(numero > 0){
                
                for(int i = 0; i = numero; i++){
                    printf("%d", numero);
                    numero = numero - 1;
                }        
            }else{
                printf("numero invalido");
            }
            
    return 0;
    }
    
