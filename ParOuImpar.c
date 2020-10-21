#include <stdio.h>

int main()
{
    
    int arm, res;
    
        do{
            printf("digite um numero\n");
            scanf("%d", &arm);
            if(arm % 2 == 0){
                printf("é par\n");
            }else{
                printf("é impar\n");
            }
            
        }while(arm != 1000);
        
    return 0;
}
