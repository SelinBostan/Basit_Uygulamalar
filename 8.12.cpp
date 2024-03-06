#include<stdio.h>
int main()
{
	int sayi,i,j;
	printf("Bir kenar uzunlugunu giriniz= ");
	scanf("%d",&sayi);
	printf("\n-------------------------------\n");
	for(i=1;i<=sayi;i++)
	{
		for(j=1;j<=sayi;j++)
		printf("*");
		printf("\n");
	}
	return 0;
}
