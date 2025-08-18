/*
Write a C program that checks two given integers and returns true if at least one of them is 30 or if their sum is 30. In other words,
if either of the two integers is 30 or if their sum equals 30, the program will return true.
Expected Output:*/

#define number_to_check 30;

#include <stdio.h>

void check_number(int a, int b)
{
    (a == 30 || b == 30 || a + b == 30) ?  printf("true\n") :  printf("false\n");
}

int main()
{
    int a, b;
    printf("Saisir une valeur \n");
    scanf("%d", &a);
    printf("Saisir une valeur \n");
    scanf("%d", &b);
    check_number(a, b);

    return 0;
}