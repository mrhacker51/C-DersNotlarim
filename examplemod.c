#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>



int main(){
    setlocale(LC_ALL,"Turkish"); int sayi1,sayi2,kalan; printf("Bir Sayi Giriniz : "); scanf("%d",&sayi1); printf("İkinci sayiyi Giriniz : "); scanf("%d",&sayi2); kalan = sayi1%sayi2; printf("Sayilarin Bölümünden Kalan : %d",kalan);
}
