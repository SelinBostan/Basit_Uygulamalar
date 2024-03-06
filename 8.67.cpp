#include<stdio.h>
int main()
{
	long sayi=0,sayi1=0,sayi2=1,i,sayi3;
	printf("Bir sayi giriniz:");
	scanf("%ld",&sayi);
	while(sayi<0)
	{
	printf("\nHATA!! Lutfen pozitif bir deger giriniz:");
	scanf("%ld",&sayi);
    }
	printf("\nfibonacci diziniz: 1\t");
	for(i=1;i<=sayi;i++)
	{
		sayi3=sayi1+sayi2;
		printf("%ld\t",sayi3);
		sayi1=sayi2;
		sayi2=sayi3;
	}
	return 0;
}
