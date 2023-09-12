#include<stdio.h>

int main()
{
    float p,v,ta,te;

    printf("v,ta,te: ");
scanf("%f %f %f",&v,&ta,&te);
    p=v+(v*(ta/100)*te);
    printf("p: %f \n",p);
}


