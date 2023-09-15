#include <stdio.h>
#include <stdlib.h>

int main()
{
   float tab[3];
   for(int i=0;i<3;i++){
        printf("\nEntrer la valeur %d:",i+1);
        scanf("%f",&tab[i]);
   }
   float som=tab[0];
    for(int i=0;i<3;i++){
        som+=tab[i+1];
    }
    printf("\nla somme des number egal:%.2f\n",som);
    printf("\nla valeur moyenne egal:%.2f\n",som/3);
    return 0;
}
