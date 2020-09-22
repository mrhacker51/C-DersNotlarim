#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	system("color a");
	setlocale(LC_ALL,"Turkish");
	int toplam = 0;
	int sayi1;
	for (int i = 0; i < 3; i++)
	{
		printf("Enter A number : ");
		scanf("%d",&sayi1);
		toplam += sayi1;
		printf("Toplam = %d\n",toplam);
	}
	return 0;
}
