#include <stdio.h>
#include <stdlib.h>

int main()
{
   char Nom[15],Prenom[20],Sexe[10];
   int Age;
   long int Number_phon;
   printf("Nom:");
   scanf("%s",&Nom[15]);
   printf("Prenom:");
   scanf("%s",&Prenom[20]);
   printf("Sexe:");
   scanf("%s",&Sexe[10]);
   printf("Age:");
   scanf("%d",&Age);
   printf("Numero de telephone:");
   scanf("%ld",&Number_phon);
   printf("-----------------------------");
   printf(" \n Nom:%s",Nom);
   printf("\n Prenom:%s",Prenom);
   printf("\n Sexe:%s",Sexe);
   printf("\n Age:%d",Age);
   printf("\n Numero de telephone:%ld",Number_phon);

    return 0;
}
