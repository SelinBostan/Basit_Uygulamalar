#include<stdio.h>

void sekizlikYap(int,int []);

int main()
{
	int sayi,yenidizi,dizi[10]={0},i;
	
	printf("Onluk sayiyi giriniz = ");
	scanf("%d",&sayi);
	printf("\n------------------------------------\nSekizlik karsiligi = ");
	sekizlikYap(sayi,dizi);
	for(i=0;i<10;i++)
		printf("%d",dizi[i]);
	
	return 0;
}

void sekizlikYap(int sayi,int a[])
{
	int i=9;
	
	while(sayi>8){
	a[i]=sayi%8;
	i--;
	sayi=sayi/8;
}

a[i]=sayi;

}
