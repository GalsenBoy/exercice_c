#include <stdio.h>

int main()
{

    int a, b;
    printf("Saisir une valeur \n");
    scanf("%d", a);
    printf("Saisir une valeur \n");
    scanf("%d", b);

    if (a == b)
        printf("Le triple de la somme est de %d", (a + b) * 3);
    printf("La somme des deux valeurs est de %d", a + b);

    return 0;
}