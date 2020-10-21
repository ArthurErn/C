#include<stdio.h>

int main(){
    int num, invertido1, invertido2, invertido3;

    printf("declare um numero\n");

    scanf("%d", &num);

    if(num >= 100 && num <= 999){

        invertido1 = num/1 % 10;
        invertido2 = num/10 % 10;
        invertido3 = num/100 % 10;

        printf("A inversao de %d eh %d%d%d", num, invertido1, invertido2, invertido3);



    }else{
        printf("numero invalido");
    }

    return 0;

}
