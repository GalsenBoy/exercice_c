/*
Write a program in C for adding two matrices of the same size.
Input the size of the square matrix (less than 5): 2
*/

#define SQUARE 2

#include <stdio.h>

void print_matrix(int arr[SQUARE][SQUARE])
{
    for (int i = 0; i < SQUARE; i++)
    {
        for (int j = 0; j < SQUARE; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int square_size, i, j, k;
    int left, right, bl, br = 0;
    printf("Saisir la taille de la matrice ");
    scanf("%d", &square_size);
    int matrix[SQUARE][SQUARE];
    for (i = 0; i < square_size; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("Saisir l'élément [%d][%d]", j, k);
                scanf("%d", &matrix[j][k]);
            }
        }
        left += matrix[0][0];
        right += matrix[0][1];
        bl += matrix[1][0];
        br += matrix[1][1];
        print_matrix(matrix);
        printf("\n");
    }
    printf("\n%d left",left);

    return 0;
}