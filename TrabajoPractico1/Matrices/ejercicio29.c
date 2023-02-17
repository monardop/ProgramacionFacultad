#include <stdio.h>

int main()
{
    int matriz[5][5] = {{92, 498, 75, 267, 78}, {93, 453, 15, 50, 493}, {281, 477, 29, 11, 21}, {36, 437, 261, 291, 370}, {367, 437, 425, 191, 89}};
    int diagonalPrincipal = 0, diagonalSecundaria = 0, triangularSup = 0, triangularInf = 0;
    
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            printf("%d\t", matriz[i][j]);
            if (i == j){
                diagonalPrincipal += matriz[i][j];
            }
            if (i < j){
                triangularInf += matriz[i][j];
            }
            if (i > j){
                triangularSup += matriz[i][j];
            }
        }
        printf("\n");
    }

    for (size_t i = 0; i < 5; i++)
    {
        diagonalSecundaria +=  matriz[0 + i][4 - i];
    }
    
    printf("- Diagonal principal: %d\n- Diagonal secundaria: %d\n- Triangular superior: %d\n- Triangular inferior: %d", diagonalPrincipal, diagonalSecundaria, triangularSup, triangularInf);

    return 0;

}