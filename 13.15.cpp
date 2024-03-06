#include<stdio.h>
#include<string.h>
int farkisay(char k1[50],char k2[50],int i)
{
	int sayac=0,n;
	for(n=0;n<i;n++)
		if(k1[n]!=k2[n])
			sayac++;
	return sayac;
}
int main()
{
	int kacharf,sayac=0;
	char kelime1[50],kelime2[50];
	puts("ilk kelimeyi girin :");
	scanf("%s",kelime1);
	kacharf=strlen(kelime1);
	puts("\nSonraki kelimeyi girin :");
	scanf("%s",kelime2);
	sayac=farkisay(kelime1,kelime2,kacharf);
	if(sayac>1){
		printf("\n(%d harf farkli zincir bozuldu)",sayac);
		printf("\nProgram sona erdi");
	}
	while(sayac==1){
		printf("(%d harf farkli zincir bozulmadi)");
		puts("\nSonraki kelimeyi girin :");
		scanf("%s",kelime2);
		sayac=farkisay(kelime1,kelime2,kacharf);
		if(sayac>1){
			printf("\n(%d harf farkli zincir bozuldu)",sayac);
			printf("\nProgram sona erdi");
			break;
		}
	}
	return 0;
}
