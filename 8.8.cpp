#include<stdio.h>
int main()
{
	int i,sayac=1;
	long a=2061;
	printf("Halley yildizinin gorulebilecegi yillar: 2061");
	/*for(i=1;i<=20;i++)
	{
		a+=75;
		printf(",\t%ld",a);
		if(a>=2000&&a<3000)
		sayac++;
	}*/
	while(a>2000&&a<3000){
		printf(",\t%ld",a+=75);
		sayac++;
	}
	printf("\nHalley yildizi 2000'li yillarda %d kez gorulebilir. ",sayac);
	return 0;
}
