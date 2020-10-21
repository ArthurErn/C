#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, F;

    printf("Digite os graus em celsius \n");
    scanf("%f", &C);

    F = C * 9 / 5 + 32;
    printf("A conversao de celsius para fahrenheit eh:\n");
    printf("%.2f", F);



    return 0;
}
