#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>



int main(){
    setlocale(LC_ALL,"Turkish");
    const float pi=3.14; float alan; int yaricap = 5; alan = pi * (yaricap * yaricap); printf("Dairenin Alani : %f",alan);
}
