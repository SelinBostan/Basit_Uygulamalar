#include<stdio.h>
int main()
{
	int yas,izleyici,toplam,kirpilmistop,enbuyuk,enkucuk;
	float ortalama,kirpilmisort;
	printf("Yasi giriniz (Durdurmak icin 0) :");
	scanf("%d",&yas);
	enbuyuk=yas;
	enkucuk=yas;
	while(yas!=0)
	{
		if(yas<0||yas>999){
    		printf("\nHata!!! Lutfen yas degerine dikkat ediniz\n");
            goto yeniden;
		}
	    izleyici+=1;
	    toplam+=yas;
	    if(yas>enbuyuk)
	    enbuyuk=yas;
	    else if(yas<enkucuk)
	    enkucuk=yas;
	    yeniden:
	   	printf("\nYasi giriniz (Durdurmak icin 0) :");
	    scanf("%d",&yas);
	}
	kirpilmistop=toplam-enbuyuk-enkucuk;
	kirpilmisort=kirpilmistop/(izleyici-2);
	ortalama=toplam/izleyici;
	printf("\nToplam %d tane izleyici giris yapti",izleyici);
	printf("\nOrtalama = %.2f, kirpilmis ortalama = %.2f",ortalama,kirpilmisort);
	return 0;
}
