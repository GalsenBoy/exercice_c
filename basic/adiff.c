/*Write a C program that will take a number as input and find the absolute difference between the input number and 51.
If the input number is greater than 51, it will return triple the absolute difference.
Expected Output:
6
21
0
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    int number = 51;
    printf("Saisir une valeur\n");
    scanf("%d",&a);
    a > number ? printf("Le triple de la valeur absolue %d", abs(a - number)*3) : printf("La différence absolue est : %d", abs(a - number));

    return 0;
}