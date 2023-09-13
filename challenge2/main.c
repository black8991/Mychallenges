#include <stdio.h>
#include <stdlib.h>

int main()
{
 float Temperatur_f,Temperatur_c;
 printf("Siser la valeur de temperatur par  Fahrenheit :");
 scanf("%f",&Temperatur_f);
 Temperatur_c=(Temperatur_f-32)/1.2;
 if(Temperatur_c<=0) {
     printf("Ltemperatur est tres froid !");
 }else if(0<Temperatur_c && Temperatur_c<=30){
     printf("Ltemperatur est froid !");
 }else if(30<Temperatur_c && Temperatur_c<40){
     printf("Ltemperatur est chaud ! ");
 }else{
     printf("Ltemperatur est tres chaud !");
 }

    return 0;
}
