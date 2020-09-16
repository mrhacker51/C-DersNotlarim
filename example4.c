#include <stdio.h>


int main(int argc, char const *argv[])
{
	const int s1=40,s2=20,s3=50;

	(s1 < s2 && s1 < s3) ? printf("s1 , s2 ve s3'den kücüktür %d%d\n",s1,s2):
	(s1 > s2 && s1 > s3) ? printf("s1 , s2 ve s3,'den büyüktür %d%d\n",s1,s2):
	(s1 < s2 > s3) ? printf("s2 hepsinden büyüktür %d%d%d\n",s1,s2,s3):
	(s3 > s1 && s3 > s2) ? printf("s3 büyüktür s1:%d,s2:%d,s3:%d\n",s1,s2,s3):
					printf("Value Error !!! %d%d%d\n",s1,s2,s3);

	return 0;
}
