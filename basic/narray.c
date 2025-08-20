/*
Write a C program to create a array taking the elements after the element value 5 from a given array of integers.
*/

#include <stdio.h>

void new_array_after_five(int *arr, int lenght)
{
    int five_position = 0;
    for (size_t i = 0; i < lenght; i++)
    {
        if (arr[i] != 5)
            five_position++;
        if (arr[i] == 5)
        {
            break;
        }
    }
    for (size_t j = five_position; j < lenght; j++)
    {
        printf("%d\n", arr[j]);
    }
}

int main()
{
    int arr[] = {1, 7, 15, 9, 18, 5, 13, 43, 62};
    int lenght = sizeof(arr) / sizeof(arr[0]);
    new_array_after_five(arr, lenght);
    return 0;
}