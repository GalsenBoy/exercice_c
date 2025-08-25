/*
Write a program in C for a 2D array of size 3x3 and print the matrix.
*/

#define SIZE 3

#include <stdio.h>

int main(){
    int matrix[3][3],i,j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Saisir matrix [%d] [%d]",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}