/*
Write a C program to reverse a given array of integers of length 5.
*/

#include <stdio.h>

void reverseArray(int* array)
{
    int size = sizeof(array) / sizeof(array[0]);
    for (int i = 4; i >= 0; i--)
    {
        printf("%d\n", array[i]);
    }
}

int main()
{
    int array[] = {10, 20, 30, 40, 50};
    reverseArray(array);
    return 0;
}