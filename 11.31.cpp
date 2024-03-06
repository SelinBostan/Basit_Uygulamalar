#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void karistir(int []);

int main()
{
	int dizi[5]={12,11,10,8,9},i;
	
	printf("Dizi:");
	for(i=0;i<5;i++)
	printf("%d,",dizi[i]);

	srand(time(NULL));	
	karistir(dizi);
	
	printf("\nDizinin karistirilmis hali:");
	for(i=0;i<5;i++)
	printf("%d,",dizi[i]);
	
	return 0;
	
}

void karistir(int a[])
{
	int b[5]={-1,-1,-1,-1,-1},i,c;
	
	for(i=0;i<5;i++){
		if(b[i]==-1)
		c=rand()%5;
		b[i]=a[c];
	}
}
