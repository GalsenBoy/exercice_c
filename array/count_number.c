/*
Write a program in C to return the number of clumps (a series of 2 or more adjacent elements of the same value) in a given array.
*/


#include <stdio.h>

int main()
{
    int arr[] = {17, 42, 42, 7, 24, 24, 17, 54, 17, 65, 55, 55, 55, 55};
    int lenght = sizeof(arr) / sizeof(arr[0]);
    int number_of_clumps = 0;
    int in_clump = 0;

    for (int i = 0; i < lenght - 1; i++)
    {
        if (arr[i] == arr[i + 1] && in_clump == 0)
        {
            number_of_clumps++;
            in_clump = 1;
        }
        else if (arr[i] != arr[i + 1])
        {
            in_clump = 0;
        }
    }

    printf("Le nombre de clumps est de : %d\n", number_of_clumps);
    return 0;
}