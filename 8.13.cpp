#include<stdio.h>
int main()
{
	int sayi,i,j;
	printf("Bir kenar uzunlugunu giriniz= ");
	scanf("%d",&sayi);
	printf("\n-------------------------------\n");
	for(i=sayi;i>0;i--)
	{
		for(j=i;j>0;j--)
		printf("%d",i);
		printf("\n");
		
	}
	return 0;
}
