#include <stdio.h>

int main()
{
    int numbre_of_elements;
    int is_in_array = 0;
    int value_to_search;
    printf("Saisir le nombre d'éléments\n");
    scanf("%d", &numbre_of_elements);
    int arr[numbre_of_elements];
    for (int i = 0; i < numbre_of_elements; i++)
    {
        printf("Element 1 - %d\n", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Élement à rechercher");
    scanf("%d", &value_to_search);
    for (size_t j = 0; j < numbre_of_elements; j++)
    {
        if (arr[j] == value_to_search)
            is_in_array++;
    }
    is_in_array > 0 ? printf("L'élément est dans le tableau\n") : printf("L'élément n'est pas dans le tableau\n");
    return 0;
}