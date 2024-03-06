#include<stdio.h>
int main()
{
	int a[5],b[5],c[10],i,j,k,l,m;
	
	printf("a dizisinin elemanlarini giriniz:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	printf("\nb dizisinin elemanlarini giriniz:");	
	for(j=0;j<5;j++)
	scanf("%d",&b[j]);
	
	for(k=0;k<5;k++)
	c[k]=a[k];

	for(l=5;l<10;l++)
	c[l]=b[l-5];
	
	printf("c dizisi:");
	for(m=0;m<10;m++)
	printf("%d",c[m]);
	printf("\nc dizisinin ikinci elemani:%d",c[1]);
	return 0;	
}
