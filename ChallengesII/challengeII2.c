#include<stdio.h>
int main (){
   char var;
   printf("Enter letter test:");
   scanf("%c",&var);
   
    switch (var)
    {
    case 'a':
    case 'A':
    case 'i':
    case 'I':
    case 'e':
    case 'E':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("c'est un voyelle");
        break;
    default:
        printf("ne pas un voyelle");
        break;
    }
    return 0;
}