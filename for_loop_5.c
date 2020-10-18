#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

  int i,sayi;
  printf("Bir Sayi Giriniz : ");
  scanf("%d",&sayi);
  for (i=0;i<=sayi;i++){
    printf("Girdiginiz Sayinin Kuvveti : %.0f\n",pow(sayi,2));
  }

}
