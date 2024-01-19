#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lA, lB, lC;

    printf("--------------------\n");  
    printf(" VERIFICA TRIANGULO \n");
    printf("--------------------\n"); 

    printf("Lado A: ");
    scanf("%f",&lA);
    printf("Lado B: ");
    scanf("%f",&lB);
    printf("Lado C: ");
    scanf("%f",&lC);


    if (lA + lB > lC && lB + lC > lA && lA + lC > lB)
    {
        if (lA == lB && lB == lC)
        {
            printf("Triangulo equilatero!\n");
            printf("     *     \n");
            printf("    ***    \n");
            printf("   *****   \n");
            printf("  *******  \n");
            printf(" ********* \n");
        }else if (lA == lB || lA == lC || lB == lC)
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