#include<stdio.h>
int main()
{
	int sayi,enbuyuk,enbuyuk2,yedek,i;
	printf("1. Sayi=");
	scanf("%d",&sayi);
	enbuyuk=sayi;
	for(i=2;i<=10;i++)
	{
		printf("%d. Sayi=",i);
		scanf("%d",&sayi);
		if(sayi>enbuyuk){
			yedek=enbuyuk;
			enbuyuk=sayi;
			enbuyuk2=yedek;
		}
	}
	printf("------------------------\n");
	printf("En buyuk deger= %d\n",enbuyuk);
	printf("Ikinci en buyuk deger= %d",enbuyuk2);
	return 0;
}
