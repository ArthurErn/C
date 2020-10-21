#include <stdio.h>

    int main(){

        int i = 0;
        for(int i = 1; i <= 100; i++){
            printf("%d ", i);
        }
        while(i < 100){
            i = i + 1;
           printf("%d ", i);
        }
        do{
            i = i + 1;
            printf("%d ", i);
        }while(i < 100);
            
    return 0;
    }
    
