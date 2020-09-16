#include <stdio.h>


int main(int argc, char const *argv[])
{

	/* const == sabit degismeyen */
	const int sayi1,sayi2,sayi3;
	int toplam;

	printf("Number 1 : \n");
	scanf("%d",&sayi1);
	printf("Number 2 : \n");
	scanf("%d",&sayi2);
	printf("Number 3 : \n");
	scanf("%d",&sayi3);

	toplam = (sayi1 + sayi2 + sayi3);

	printf("Girilen Sayilarin Toplami = %d\n",toplam);


	return 0;
}
