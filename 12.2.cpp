#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int ara(int[],int,int,int*,int*);
int main()
{
	int n=3;
	int a[n][n],i,j,aranacak,sat,sut;
	
	srand(time(NULL));
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			a[i][j]=rand()%10;
	printf("Dizi icerisinde aranacak degeri giriniz:");
	scanf("%d",&aranacak);
	
	ara(a,n,aranacak,&sat,&sut);
	printf("Girilen elemman bu dizinin %d. satir,%d. sutununda bulunur",sat,sut);
	
	return 0;		
}
int ara(int a[],int n,int aranacak,int *satp,int *sutp)
{
	int elemanvar=0,i,j;
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(a[i][j]==aranacak){
				*satp=i;
				*sutp=j;
				elemanvar=1;
			}
		}
	return elemanvar;
}
