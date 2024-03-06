#include<stdio.h>
int main()
{
	float a[6],b[6],c[12];
	int i,m=0,n=0;
	
	printf("c dizisinin elemanlarini giriniz:");
	for(i=0;i<12;i++)
	scanf("%f",&c[i]);
	
	for(i=0;i<12;i++)
	{
		if(i%2==0)
		{
			a[m]=c[i];
			m++;
		}
		else if(i%2!=0)
		{
			b[n]=c[i];
			n++;
		}
	}
	
	printf("\na dizisinin elemanlari:");
		for(i=0;i<6;i++)
	printf("%f\t",a[i]);
	
	printf("\nb dizisinin elemanlari:");
		for(i=0;i<6;i++)
	printf("%f\t",b[i]);
	
	
	return 0;	
}
