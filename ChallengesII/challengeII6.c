#include<stdio.h>
int main (){
    float Var;
    printf("Enter number:");
    scanf("%f",&Var);
    if(Var<0){
        printf("number est negatif.");
    }else if(Var>0){
        printf("number est positif.");
    }else{
        printf("number est null.");
    }
    
    return 0;
}