/*
Write a program in C to find the transpose of a given matrix.
*/

#include <stdio.h>

int main()
{
    int ligne, colonne;
    printf("Saisir le nombre de ligne : ");
    scanf("%d", &ligne);
    printf("\nSaisir le nombre de ligne : ");
    scanf("%d", &colonne);
    int arr[ligne][colonne];
    int transpose[ligne][colonne];
    for (int i = 0; i < ligne; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            printf("Saisir la valeur : ");
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < ligne; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < ligne; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < colonne; i++)
    {
        for (int j = 0; j < ligne; j++)
        {
            printf("%d", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}