#include<stdio.h>
int main (){
    int Number;
    printf("Enter number:");
    scanf("%d",&Number);
    int rest=Number%2;
    if (rest==1){
        printf("\nNumbre est imper.");
    }else{
        printf("\nNumbre est pere.");
    }
    return 0;
}