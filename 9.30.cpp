#include<stdio.h>

void asaliBul(int sayi,char harf)
{
	int test=1,a,i;
	char b,k;
	if(sayi<=1&&harf==b)
	printf("\n2");
	else if(sayi<=1&&harf==k)
	printf("==========Girdiginiz sayi negatif oldugundan kendisinden kucuk asal sayi bulunmamaktadir==========");
	else if(sayi>1&&harf==b)
	{
		a=sayi+1;
		while(test==1)
		{
			for(i=2;i<=a-1;i++)
			{
				if(a%i==0)
				{
					test==1;
					break;
				}
			}
		a++;		
		}
		printf("%d",a);
	}
	else if(sayi>1&&harf==k)
	{
		a=sayi-1;
		while(test)
		{
			for(i=2;i<=a-1;i++)
			{
				if(a%i==0)
				{
					test==1;
					break;
				}
			}
		a--;		
		}
		printf("\n%d",a);
	}
}
int main()
{
	int sayi;
	char harf;
	printf("Sayiyi ve yakin asal sayinin kendinden buyuk mu yoksa kucuk mu olacagini seciniz (b/k):");
	scanf("%d %c",&sayi,&harf);
	asaliBul(sayi,harf);
	
	return 0;
	
}
