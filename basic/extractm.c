/*
Write a C program to create a new array containing the middle elements from the two given arrays of integers, each of length 5.
*/
#include <math.h>
#include <stdio.h>

void extract_middle(int *ar1, int *ar2, int *result_array)
{
    result_array[0] = ar1[2];
    result_array[1] = ar2[2];
}
int main()
{
    int array1[] = {10, 20, -30, -40, 30};
    int array2[] = {10, 20, 30, 40, 30};
    int arr[2];
    extract_middle(array1, array2, arr);
    printf("%d",arr[1]);
    return 0;
}