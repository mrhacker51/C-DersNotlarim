#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(){
    setlocale(LC_ALL,"Turkish");
    /*
    int abs();
    double pow();
    double fabs();
    double sqrt();
    */
    /*
    hipetonus hesaplama = c2=a2+b2
    */
    int a,b;
    double hipetonus;
    printf("Sayi Giriniz : "); scanf("%d",&a); printf("Sayi Giriniz : "); scanf("%d",&b); hipetonus = a*a + b*b; printf("Hipetonus : %.1f",sqrt(hipetonus));

}
