#include<stdio.h>

void main()
{
    float CD, QD, VC, TQD;
    printf("Escreva cotacao do dolar atualmente: ");
    scanf("%f",&CD);
    printf("Escreva a quantidade de dolar(es) disponivel(is): ");
    scanf("%f",&QD);
    VC = QD / CD;
    printf("valor convertido: %.2f reais\n", VC);

}
