#include<stdio.h>

int main()
{
    float R, A;
    printf("escreva o raio:");
    scanf("%f", &R);
    A = 3.14159265 * pow(R ,2);
    printf("area: %.2f \n", A);

}
