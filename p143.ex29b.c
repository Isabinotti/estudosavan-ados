#include<stdio.h>

int main()
{
    float x;

    printf("Insira um valor inteiro:" );
    scanf("%f", &x);

    if(x==0)
    {
        printf("O numero nulo");
    }
    else
        if(x>0)
    {
        printf("O numero e positivo");
    }
    else
    {
        printf("O numero e negativo");
    }
}
