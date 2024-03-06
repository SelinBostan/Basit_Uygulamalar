#include<stdio.h>
int main()
{
	float a[6],b[6],c[12];
	int i,j,k,m=0,n=0;
	
	printf("a dizisinin elemanlarini giriniz:");
	for(i=0;i<=5;i++)
	scanf("%f",&a[i]);
	
	printf("\nb dizisinin elemanlarini giriniz:");	
	for(j=0;j<=5;j++)
	scanf("%f",&b[j]);
	
	printf("\nc dizisinin elemanlari:");
	for(k=0;k<12;k++)
	{
		if(k%2==0)
		{
			c[k]=a[m];
			m++;
		}
		else if(k%2!=0)
		{
			c[k]=b[n];
			n++;
		}
	}
	for(i=0;i<12;i++)
	printf("%f\t",c[i]);

	return 0;	
}
