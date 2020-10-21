#include<stdio.h>

int main(){
    float premio, ganhador1, ganhador2, porcentagem3, ganhador3;

        premio = 780.000;
        ganhador1 = premio * 0.46;
        ganhador2 = premio * 0.32;
        porcentagem3 = 1 - 0.46 - 0.32;
        ganhador3 = premio * porcentagem3;

        printf("o primeiro lugar recebeu R$ %.3f\n", ganhador1);
        printf("o segundo lugar recebeu R$ %.3f\n", ganhador2);
        printf("o terceiro lugar recebeu R$ %.3f", ganhador3);


    return 0;

}
