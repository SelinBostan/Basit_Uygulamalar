#include<stdio.h>
#include<math.h>
int main()
{
	int i,sayac,sayi,negatifadet=0,b,pozitifadet=0;
	printf("Kac adet sayi gireceksiniz:");
	scanf("%d",&i);
	printf("Sayilar (%d tane):",i);
	for(sayac=1;sayac<=i;sayac++)
	{
		scanf("%d",&sayi);
		if(sayi<0)
		negatifadet+=1;
		else if(sayi==0)
		{
		b=i;
		b-=1;
		}
	}
	pozitifadet=b-negatifadet;
	printf("Girilen %d sayinin %d tanesi negatif, %d tanesi pozitiftir.",i,negatifadet,abs(pozitifadet));
	return 0;
    
}
