/*
Write a program in C to delete an element at a desired position from an array.
*/

#include <stdio.h>

void before_delete_element(int arr[], int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        printf("%d ", arr[i]);
    }
}

int after_delete_element(int arr[], int lenght, int pos)
{
    for (int i = pos - 1; i < lenght - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return lenght -1;
}

int main()
{
    int number_of_element;
    printf("Saisir le nombre d'élément\n");
    scanf("%d",&number_of_element);
    int arr[number_of_element];
    int pos;
    for (int i = 0; i < number_of_element; i++)
    {
        printf("Saisir une valeur\n");
        scanf("%d",&arr[i]);
    }
    before_delete_element(arr,number_of_element);
    printf("Saisir la position\n");
    scanf("%d",&pos);
    int new_lenght = after_delete_element(arr,number_of_element,pos);
    for (int i = 0; i < new_lenght; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}