#include<stdio.h>
void ayristir(int,int*,int*,int*,int*);
int main()
{
	int sayi,bir,on,yuz,bin;
	
	printf("Sayiyi girin:");
	scanf("%d",&sayi);
	
	ayristir(sayi,&bir,&on,&yuz,&bin);
	printf("%d sayisinin birler basamagi : %d",sayi,bir);
	printf("\n%d sayisinin onlar basamagi : %d",sayi,on);
	printf("\n%d sayisinin yuzler basamagi : %d",sayi,yuz);
	printf("\n%d sayisinin binler basamagi : %d",sayi,bin);
	
	return 0;
}
void ayristir(int sayi,int *birp,int *onp,int *yuzp,int *binp)
{
	*birp=sayi%10;
	*onp=((sayi%100)-*birp)/10;  //onlar basamağında 0 da olabilir ondan -*birp dedik SORU:% un - ya göre işlem önceliği var neden sayı%100 ü parantez içine aldık?
	*yuzp=((sayi%1000)-(sayi%100))/100;             //yine neden ana parantez okey de onun içindeki iki parantezi kullandık?
	*binp=(sayi-(sayi%1000))/1000;
}
