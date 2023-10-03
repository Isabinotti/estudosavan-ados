#include <stdio.h>

int main()
{
    float N1, N2, N3, Md;

    printf("Insira o primeiro valor:");
    scanf("%f",&N1);
    printf("Insira o segundo valor:");
    scanf("%f",&N2);
    printf("Insira o terceiro valor:");
    scanf("%f",&N3);
    Md = (N1 * 2 + N2 * 3 + N3 * 5)/ (2 + 3 + 5);
    printf("%.2f", Md);

    if( Md >= 7.0)
    {
        printf("\nAPROVADO\n");
    }
    else
    {
        printf("\nREPROVADO\n");
    }
}
