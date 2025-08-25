/*
Write a program in C to find the second largest element in an array.
*/

#include <stdio.h>

void second_largest_element(int arr[], int lenght)
{
    int tmp;
    for (int i = 0; i < lenght; i++)
    {
        for (int j = 0; j < lenght; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    printf("%d\n", arr[1]);
}

int main()
{
    int lenght;
    printf("Saisir la taille : ");
    scanf("%d", &lenght);
    int arr[lenght];
    for (int i = 0; i < lenght; i++)
    {
        printf("Saisir une valeur\n");
        scanf("%d", &arr[i]);
    }
    second_largest_element(arr, lenght);
    return 0;
}