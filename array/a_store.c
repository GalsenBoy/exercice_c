/*
Write a program in C to store elements in an array and print them.
*/

#include <stdio.h>

void print_array(int *arr, int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int number_of_element_to_store;
    printf("Saisir le nombre d'élément à sauvegarder \n");
    scanf("%d", &number_of_element_to_store);
    int store[number_of_element_to_store];
    for (int i = 0; i < number_of_element_to_store; i++)
    {
        printf("Saisir élément - %d ", i + 1);
        scanf("%d", &store[i]);
    }
    print_array(store, number_of_element_to_store);

    return 0;
}