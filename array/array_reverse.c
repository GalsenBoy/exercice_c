/*
Write a program in C to read n number of values in an array and display them in reverse order.
*/

#include <stdio.h>


void print_reverse_array(int *arr, int lenght)
{
    for (int i = lenght-1; i >=0; i--)
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
    print_reverse_array(store, number_of_element_to_store);

    return 0;
}