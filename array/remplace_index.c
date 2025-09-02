/*
Write a program in C to rearrange an array such that arr[i]=i.
N.B.: Given array contains N elements, from 0 to N – 1. All elements within the range may not be present in the array. There will be -1 if an element within the range is not present in the array.
*/

#include <stdio.h>

int main()
{
    int arr[] = {2, 5, -1, 6, -1, 8, 7, -1, 9, 1};
    int lenght = sizeof(arr) / sizeof(arr[0]);
    int new_array[lenght];

    for (size_t i = 0; i < lenght; i++)
    {
        new_array[i] = -1;
    }

    for (size_t i = 0; i < lenght; i++)
    {
        if (arr[i] != -1)
        {
            new_array[arr[i]] = arr[i];
        }
        
    }

    for (size_t i = 0; i < lenght; i++)
    {
        printf("%d ",new_array[i]);
    }
    
    return 0;
}