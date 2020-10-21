#include<stdio.h>

int main()
{
    int num, aux = 0, nz = 0, nu = 1;
    
        printf("informe um numero ");
        scanf("%d", &num);
        
        if(num > 0){
            for(int i = 0; aux < num; i++){
                
                if(i < 1){
                    printf("%d ", nz);
                }else{
                    aux = nz + nu;
                    nu = aux;
                        if(num < nu){
                            printf("\nO proximo da sequencia é %d!",nu);
                            break;
                        }
                    nz = aux + nz;
                    printf("%d %d ", nu, nz);
                
                        if(num < nz){
                            printf("\nO proximo da sequencia é %d!", nz);
                            break;
                        }
                }
            }
        }else{
            printf("Numero invalido");
        }
    return 0;
}
