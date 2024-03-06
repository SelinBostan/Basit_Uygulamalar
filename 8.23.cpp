#include<stdio.h>
int main()
{
	int bolunur=0,toplam=0,adet,i,sayi;
	printf("Kac adet sayi gireceksiniz:");
	scanf("%d",&adet);
	while(adet<0)
	{
	printf("HATA!!\n Adet 0 ya da negatif olamaz\n");
	printf("Kac adet sayi gireceksiniz:");
	scanf("%d",&adet);
    }
    printf("%d adet sayi giriniz:",adet);
    for(i=1;i<=adet;i++)
    {
    	scanf("%d",&sayi);
    	if(sayi%8==0||sayi%13==0)
    {
    	bolunur+=1;
    	toplam+=sayi;
	}
	}
	printf("Kurala uyan toplam %d adet sayi girdiniz\n",bolunur);
	printf("Toplamlari: %d",toplam);
	return 0;


}
