#include <stdio.h>



int main(){
	char isim[10];
	char soyIsim[10];
	int yas;



	printf("Lütfen İsminizi Giriniz : \n");
	scanf("%s",&isim);

	printf("Lütfen Soy İsminizi Giriniz : \n");
	scanf("%s",&soyIsim);

	printf("Lütfen Yasinizi Giriniz : \n");
	scanf("%d",&yas);


	if (yas >= 20){
		printf("Adiniz=%s\n",isim);
		printf("Soyadiniz=%s\n",soyIsim);
		printf("Yasiniz=%d\n",yas);
		printf("Ehliyet Alabilirsiniz\n");
	}

	else{
		printf("Adiniz=%s\n",isim);
		printf("Soyadiniz=%s\n",soyIsim);
		printf("Yasiniz=%d\n",yas);
		printf("Ehliyet Alamazsiniz\n");
	}
}
