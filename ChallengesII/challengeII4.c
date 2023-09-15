#include<stdio.h>
#include<math.h>
int main (){
  float a,b,c;
  printf("\nEnter a:");
  scanf("%f",&a);
  printf("\nEnter b:");
  scanf("%f",&b);
  printf("\nEnter c:");
  scanf("%f",&c);
  float delta=(pow(b,2)-4*a*c);

  if (delta==0){
   printf("les solution possible son r1=%f et r2= %f.",(-b+sqrt(delta)/2*a) ,(-b-sqrt(delta)/2*a));
  }else if(delta>0){
    printf("les solution possible est r1=%f ",(-b/2*a) );
  }else{
    printf("Non solution possible pour  equation. ");
  }

    return 0;
}