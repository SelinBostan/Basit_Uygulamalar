#include<stdio.h>
#include<stdlib.h>
int main()
{
	char sayilar[4][2];
	int toplam,dizi[4],i,top=0;
	puts("4 adet tamsayi icerikli dizgi girin");
	for(i=0;i<4;i++)
		scanf("%s",sayilar[i]);
	for(i=0;i<4;i++){
		dizi[i]=atoi(sayilar[i]);
		top+=dizi[i];
	}
	printf("Girdiginiz sayilarin toplami: %d dir");
	return 0;
	
}
