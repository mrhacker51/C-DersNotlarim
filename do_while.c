#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(){
    int sayi;
    
    do{
    printf("Sayi Giriniz : ");
    scanf("%d",&sayi);
    
    printf("%d Sayisinin Kuvveti : %.1f\n",sayi,pow(sayi,2));
    
    }while(sayi>0);
    
    printf("Program Closed ...");
}
