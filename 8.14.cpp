#include<stdio.h>
int main()
{
	int N,sayac;
	float a,alan=0;
	printf("En buyuk karenin bir kenar uzunlugunu ve toplmda kac kare istediginizi yaziniz:");
	scanf("%f %d",&a,&N);
	//alan=a*a;
	for(sayac=1;sayac<=N;sayac++)
	{
		//a/=2;
		//alan+=a*a;
		alan+=a*a;
		a/=2;
	}
	printf("Toplam alan:%f",alan);
	return 0;
}

