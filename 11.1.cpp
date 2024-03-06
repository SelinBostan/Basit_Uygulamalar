#include<stdio.h>
int main()
{
	int sayi[6],i,j,a=6;
	printf("Sayilari giriniz(1-30):");
	for(i=0;i<a;i++)
	{
	scanf("%d",&sayi[i]);
	if(sayi[i]<1||sayi[i]>30)
	{
	printf("Sayinin 1 ile 30 arasinda olmasina dikkat edin");
	scanf("%d",&sayi[i]);
	}
	}
	printf("SAYILAR VE HISTOGRAMLARI\n");
	for(i=0;i<6;i++)
	{
	printf("%d\t",sayi[i]);
	for(j=1;j<=sayi[i];j++)
		printf("*");
		printf("\n");
	}
	return 0;
}
