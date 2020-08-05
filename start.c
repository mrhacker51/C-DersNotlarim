#include <stdio.h>


int main() {

  int sayi1;
  int sayi2;

  int toplam;
  int carpim;
  int bolum;
  int mod;

  printf("Lütfen Bir Sayi giriniz:\n");
  scanf("%d", & sayi1);

  printf("Lütfen İkinci Sayiyi Giriniz\n");
  scanf("%d", & sayi2);

  toplam = sayi1 + sayi2;
  carpim = sayi1 * sayi2;
  bolum = sayi1 / sayi2;
  mod = sayi1 % sayi2;

  printf("Bölüm=%d\n", bolum);
  printf("Mod=%d\n", mod);

  if (carpim == 200) {
    printf("%d\n", carpim);
    printf("Carpim Budur\n", carpim);
  } else if (carpim == 300) {
    printf("Carpim Budur\n", carpim);
  } else if (carpim == 400) {
    printf("%d\n", carpim);
    printf("Carpim=%d\n", carpim);

    printf("Carpim=%d\n", carpim);

  } else {
    printf("Sayilarin Toplami=%d\n", toplam);
    printf("Sayilarin Carpimi=%d\n", carpim);
    return 0;
  }
}
