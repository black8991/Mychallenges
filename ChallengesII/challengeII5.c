#include <stdio.h>
#include <stdlib.h>

int main()

{
    int anne;
    printf("entre l' annee");
    scanf(" %d", &anne);

    printf("mois = %d \n", anne * 12);
    printf("jours = %d  \n", anne * 12 * 30);
    printf("hours = %d  \n", anne * 12 * 30 * 24);
    printf("minutes = %d  \n", anne * 12 * 30 * 24 * 60);
    printf("Secondes = %d  \n", anne * 12 * 30 * 24 * 60 * 60);

    return 0;
}