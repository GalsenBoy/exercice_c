/*
Write a C program to create an array of length 3 from a given array (length at least 3) containing the elements from the middle of the array.
*/

#include <stdio.h>
#include <math.h>

void subarray(int* arr,int size, int* newtab){
    int start = (size/ 2 - 1);

    for (size_t i = 0; i < 3; i++)
    {
        newtab[i] = arr[start + 1];
    }
    
}

int main(){

    int arr[] = {1, 5, 7, 9, 11, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int newtab[3];
    subarray(arr,size,newtab);
    printf("%d",newtab[2]);
    return 0;
}