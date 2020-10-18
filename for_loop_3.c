#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

  for (int i=0; i<=100; i++){
    if (i % 2 == 0){
      printf("Cift Sayilar : %d\t\n\t",i);
    }

    else{
      printf("Tek Sayilar : %d",i);
    }
  }

}
