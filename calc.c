#include <stdio.h>


int main(){
	int sayi1,sayi2,secim;


	printf("İlk Sayiyi Giriniz : \n");
	scanf("%d",&sayi1);

	printf("İkinci Sayiyi Giriniz : \n");
	scanf("%d",&sayi2);


	printf("Lütfen İslem Seciniz : \n1-Toplama\n2-Cikarma\n3-Carpma\n4-Bölme\nSeciminizi Giriniz : ");
	scanf("%d",&secim);

	switch(secim){

		case 1:printf("Sectiginiz Sayilarin Toplama Sonucu=%d\n",sayi1+sayi2);break;
		case 2:printf("Sectiginiz Sayilarin Cikarma Sonucu=%d\n",sayi1-sayi2);break;
		case 3:printf("Sectiginiz Sayilarin Carpma Sonucu=%d\n",sayi1*sayi2);break;
		case 4:printf("Sectiginiz Sayilarin Bölme Sonucu=%d\n",sayi1/sayi2);break;

		default:printf("Hatali İslem Yaptiniz !!!\n")


	}
}
