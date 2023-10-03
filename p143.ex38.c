#include<stdio.h>
#include<math.h>

 int main()
 {
     float n1,n2;
     float r;
     char o;

     printf("Digite a operacao completa, ja com os sinais ('+' para adicao, '-' para subtracao, '*' para multiplicacao, '/' para divisao): \n");

     scanf("%f", &n1);
     scanf("%c", &o);
     scanf("%f", &n2);

     switch (o)
     {
     case '+':
        r= n1+n2;
        printf("O resultado da soma e: %.1f" , r);

        break;

     case'-':
        r=n1-n2;
        printf("O resultado da subtracao e: %.1f" , r);

        break;

     case'*':
        r=n1*n2;
        printf("O resultado da multiplicacao e: %.1f" , r);

        break;

     case'/':
        r=n1/n2;
        printf("O resultado da divisao e: %.1f" , r);
        break;

     default:
        printf("Operecao invalida.");
             }
      }
