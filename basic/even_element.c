/*
Write a C program to count the even number of elements in a given array of integers.
*/

#include <stdio.h>

int even_element(int *arr, int lenght)
{
    int i = 0;
    for (size_t j = 0; j < lenght ; j++)
    {
        if (arr[j] % 2 == 0)
            i++;
    }
    return i;
}

int main()
{
    int arr[] = {1, 5, 7, 15, 9, 18, 13, 43, 62};
    int lenght = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n",even_element(arr,lenght));
    return 0;
}