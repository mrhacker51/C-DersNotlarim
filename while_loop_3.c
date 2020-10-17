#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char const *argv[])
{
	setlocale(LC_ALL,"Turkish");

	int i = 1;


	while (i<10){
		printf("%d 'nin Degeri : %d\t",i,i * 1,i++);
		printf("%d 'nin Degeri : %d\t",i,i * 2,i++);
		printf("%d 'nin Degeri : %d\n",i,i * 3,i++);
		
	}
	return 0;
}
