#include <stdio.h>
#include <stdlib.h>

int main()
{
    float LA, LB, LC;

    printf("--------------------\n");  
    printf(" VERIFICA TRIANGULO \n");
    printf("--------------------\n"); 

    printf("Lado A: ");
    scanf("%f",&LA);
    printf("Lado B: ");
    scanf("%f",&LB);
    printf("Lado C: ");
    scanf("%f",&LC);


    if (LA + LB > LC && LB + LC > LA && LA + LC > LB)
    {
        if (LA == LB && LB == LC)
        {
            printf("Triangulo equilatero!\n");
            printf("     *     \n");
            printf("    ***    \n");
            printf("   *****   \n");
            printf("  *******  \n");
            printf(" ********* \n");
        }else if (LA == LB || LA == LC || LB == LC)
        {
            printf("Triangulo isosceles!\n");
            printf("     * \n");
            printf("    ** \n");
            printf("   *** \n");
            printf("  **** \n");
            printf(" ***** \n");
        }else
        {
            printf("Triangulo escaleno!\n");
            printf("     *             \n");
            printf("    *****          \n");
            printf("   *********       \n");
            printf("  *************    \n");
            printf(" ***************** \n");
        }
    }else
    {
        printf("Nao e possivel formar um triangulo!");
    }
    return 0;
}