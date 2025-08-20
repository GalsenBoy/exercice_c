/*
Write a C program to sort the elements of an array.
*/

#include <stdio.h>

int main()
{
    int number_to_store;
    printf("Saisir le nombre de numéro à trier\n");
    scanf("%d", &number_to_store);
    int arr[number_to_store];
    int temp;
    for (size_t i = 0; i < number_to_store; i++)
    {
        printf("Saisir un nombre\n");
        scanf("%d", &arr[i]);
    }
    for (size_t j = 0; j < number_to_store; j++)
    {
        for (size_t k = 0; k < number_to_store; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
    printf("%d", arr[0]);
    return 0;
}