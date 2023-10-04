#include<stdio.h>
#include<math.h>

 int main()
{
    float A,M,IMC;
    printf("Insira sua altura e seu peso: ");
    scanf("%f %f",&A,&M);
    IMC= M/(A*A);
    if(18.5<=IMC&&IMC<25)
    {
        printf("Normal");
    }
    else if(25<=IMC&&IMC<30)
    {
        printf("Sobrepeso");
    }
    else if(30<=IMC&&IMC<35)
    {
        printf("Obesidade grau 1");
    }
    else if (35<=IMC&&IMC<40)
    {
        printf("Obesidade grau 2");
    }
   else
  {
      printf("Indice nao previsto");
   }
}
