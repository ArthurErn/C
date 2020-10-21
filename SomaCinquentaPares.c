#include <stdio.h>

    int main(){

        int numero = 0, auxiliar = 0;
        
            for(int i = 1; i <= 50; i++){
                numero = numero + 2;
                auxiliar = auxiliar + numero;
            }
            
            printf("%d", auxiliar);
            
    return 0;
    }
    
