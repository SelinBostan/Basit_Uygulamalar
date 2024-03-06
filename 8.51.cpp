#include<stdio.h>
int main()
{
	int olcum,i;
	float x,aratop,geneltop,a;

	printf("Olcum sayisi : ");
	scanf("%d",&olcum);
	while(olcum!=0)
	{
	for(i=1;i<=olcum;i++)
	{
		printf("\nOlcum giriniz: ");
		scanf("%f",&x);
		aratop+=x;
	}
	printf("\nAra toplam :  %.2f",aratop);
	a=aratop;
	aratop=0;
	geneltop+=a;
	printf("\nOlcum sayisi : ");
	scanf("%d",&olcum);	
    }
	
	printf("\nGenel toplam :  %.2f",geneltop);
	
	return 0;
}
