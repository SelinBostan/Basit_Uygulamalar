#include<stdio.h>
float kucukAci(float saat,float dakika)
{
	float akrep,yelkovan,hamderece,hamderece2,a,b,derece;
	yelkovan=dakika*6;
	akrep=saat*0.5;
	hamderece=saat*30;
	hamderece2=360-hamderece;
	if(dakika!=0)
	{
	a=hamderece-yelkovan+akrep;
	b=360-a;
	}
	else if(dakika==0)
	{
		a=hamderece;
		b=360-a;
	}
	if(a>b)
	derece=b;
	else if(a<b)
	derece=a;

	return derece;
	
}
int main()
{
	float c,sa,dk;
	printf("Saat ve dakikayi giriniz:");
	scanf("%f %f",&sa,&dk);
	c=kucukAci(sa,dk);printf("\n%.1f",c);
	return 0;
	
}
