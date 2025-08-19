/*
Write a C program to rotate the elements of a given array of integers (length 4 ) in the left direction and return the updated array.
*/

#include <stdio.h>

int main()
{
    int array[] = {10, 20, 30, 40};
    int new_array[] = {};
    int size = sizeof(array) / sizeof(array[0]);
    new_array[3] = array[0];
    for (int i = 0; i < size - 1; i++)
    {
        new_array[i] = array[i + 1];
    }
    for (int j = 0; j < 4; j++)
    {
        printf("%d\n", new_array[j]);
    }
    return 0;
}