#include<stdio.h>

float main()
{
    float A,B,C;

    printf("A,B: ");
    scanf("%f %f", &A,&B);
    C=A;
    A=B;
    B=C;
    printf("A: %f\n", A);
    printf("B: %f\n", B);
}
