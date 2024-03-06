#include<stdio.h>
void haftaGunSaatBul(int,int *,int *,int *);
int main()
{
	int saat,hafta=0,gun=0,saat2=0;
	printf("Sureyi girin (saat) :");
	scanf("%d",&saat);
printf("\n--------------------------------");
	haftaGunSaatBul(saat,&hafta,&gun,&saat2);
	printf("\nGirilen sure : %d Hafta, %d gun, %d saat eder",hafta,gun,saat);
	return 0;
}
void haftaGunSaatBul(int saat,int*haftap,int*gunp,int*saat2p)
{
	if(saat>168)
		*haftap=saat/168;
	saat=saat%168;
	if(saat>24)
		*gunp=saat/24;
	*saat2p=saat%24;
}
