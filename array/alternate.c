/*
Write a program in C to rearrange an array in such an order that– small, large, second smallest, second largest, etc.
*/

void sort_smaller(int arr[], int lenght, int smaller[])
{
    int tmp;
    for (int i = 0; i < lenght - 1; i++)
    {
        for (int j = 0; j < lenght - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < lenght; i++)
    {
        smaller[i] = arr[i];
    }
}
void sort_bigger(int arr[], int lenght, int largest[])
{
    int tmp;
    for (int i = 0; i < lenght - 1; i++)
    {
        for (int j = 0; j < lenght - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < lenght; i++)
    {
        largest[i] = arr[i];
    }
}

#include <stdio.h>

int main()
{
    int arr[] = {5, 8, 1, 4, 2, 9, 3, 7, 6};
    int lenght = sizeof(arr) / sizeof(arr[0]);
    int half = lenght / 2;
    int largest[lenght], smaller[lenght];
    sort_smaller(arr, lenght, smaller);
    sort_bigger(arr, lenght, largest);

    for (int i = 0; i < half; i++)
    {
        printf("%d %d ", smaller[i], largest[i]);
    }
    if (lenght % 2 != 0)
    {
        printf("%d", smaller[half]);
    }
    return 0;
}