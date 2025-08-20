/*
Write a C program to find the largest value from the first, last, and middle elements of a given array of integers of odd length (at least 1).
Expected Output:
*/

#include <stdio.h>

int largest_value(int *arr, int lenght)
{
    int middle_number = lenght / 2;   
    if (arr[0] > arr[middle_number] && arr[0] > arr[lenght - 1])
        return arr[0];
    else if (arr[middle_number] > arr[0] && arr[middle_number] > arr[lenght - 1])
        return arr[middle_number];
    else
        return arr[lenght - 1];
}

int main()
{
    int arr[] = {1, 5, 7, 15, 9, 11, 13,43,62};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("La veleur de sortie est :%d\n",largest_value(arr,size));
    return 0;
}