#include<stdio.h>

int main()
{
    float x,y,d;

    printf("Digite um valor:" );
    scanf("%f", &x );

    printf("Insira um segundo valor:");
    scanf("%f",&y );

    d = x-y;
    if (d>=0)
    {
    printf("A diferenca e maior ou igual a 0.\n");
    printf("A diferenca e: %f", d);

    }
    else
    {
        printf("A diferenca e menor ou igual a 0.\n");
        printf("A diferenca e: %f", d);
    }
}
