#include<stdio.h>

void main()
{
    float CR, QR, VC;
    printf("Escreva cotacao do real atualmente: ");
    scanf("%f",&CR);
    printf("Escreva a quantidade de reais disponivel(is): ");
    scanf("%f",&QR);
    VC = QR * CR;
    printf("valor convertido: %.2f dolar(es)\n", VC);

}
