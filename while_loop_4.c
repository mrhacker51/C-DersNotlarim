#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL,"Turkish");

	int i,sayi;

	while (i<10){
		printf("Bir Sayi Giriniz : ");
		scanf("%d",&sayi);

		printf("\nGirdiginiz Sayinin Karekök'ü : %.1f\n",sqrt(sayi));
		i++;


	}
}
