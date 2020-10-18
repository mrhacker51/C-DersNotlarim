#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

  for (int i=0; i<=100; i++){
    if (sqrt(i) == 0.0){
      printf("0.0 Deger  : %.1f\n",(double)i);
    }
    else{
      printf("Deger : %.1f\n",(double)sqrt(i));
    }
  }

}
