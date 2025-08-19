/*
Write a C program to find the larger of two given integers. However if the two integers have the same remainder when divided by 5, choose the smaller integer. 
If the two integers are the same, return 0.
*/
#define MAX(i, j) (((i) > (j)) ? (i) : (j))
#define MIN(i, j) (((i) < (j)) ? (i) : (j))
#include <stdio.h>

int larger_of_two_given_integers(int a, int b){
    if (a == b)
        return 0;
    if (a % 5 == b % 5)
        return MIN(a, b);
    return MAX(a, b);
}

int main(){
    int a,b;
    printf("Saisir une valeur\n");
    scanf("%d",&a);
     printf("Saisir une valeur\n");
    scanf("%d",&b);
    printf("Valeur de retour %d\n",larger_of_two_given_integers(a,b));
    return 0;
}

