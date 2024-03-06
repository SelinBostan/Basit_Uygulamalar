#include<stdio.h>
void bursiyerBul(float notort1,float notort2,int girisyili1,int girisyili2,int dogumyili1,int dogumyili2)
{
	if(notort1>notort2)
		printf("Daha basarili olan,\nortalamasi %.2f, giris yili %d ve %d yilinda dogandir.",notort1,girisyili1,dogumyili1);
	else if(notort1<notort2)
		printf("Daha basarili olan,\nortalamasi %.2f, giris yili %d ve %d yilinda dogandir.",notort2,girisyili2,dogumyili2);
	else if(notort1=notort2)
	{
		if(girisyili1>girisyili2)
			printf("Daha basarili olan,\nortalamasi %.2f, giris yili %d ve %d yilinda dogandir.",notort1,girisyili1,dogumyili1);
		else if(girisyili1<girisyili2)
			printf("Daha basarili olan,\nortalamasi %.2f, giris yili %d ve %d yilinda dogandir.",notort2,girisyili2,dogumyili2);
		else if(girisyili1=girisyili2)
		{
			if(dogumyili1>dogumyili2)
			printf("Daha basarili olan,\nortalamasi %.2f, giris yili %d ve %d yilinda dogandir.",notort1,girisyili1,dogumyili1);
		    else if(dogumyili1<dogumyili2)
			printf("Daha basarili olan,\nortalamasi %.2f, giris yili %d ve %d yilinda dogandir.",notort2,girisyili2,dogumyili2);
		}	
	}	
}
int main()
{
	float notort1,notort2;
	int girisyili1,girisyili2,dogumyili1,dogumyili2;
	printf("Birinci ogrencinin bilgileri:");
	scanf("%f %d %d",&notort1,&girisyili1,&dogumyili1);
	printf("\nikinci ogrencinin bilgileri:");
	scanf("%f %d %d",&notort2,&girisyili2,&dogumyili2);
	bursiyerBul(notort1,notort2,girisyili1,girisyili2,dogumyili1,dogumyili2);
	return 0;
}
