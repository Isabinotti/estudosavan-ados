#include<stdio.h>

int main()
{
    float t,v,d,l;

    printf("escreva t: ");
    scanf("%f",&t);
    printf("escreva v: ");
    scanf("%f", &v);
    d=t*v;
    l=d/12;
    printf("v=%f \n t=%f \n d=%f \n l=%f", v,t,d,l);

}
