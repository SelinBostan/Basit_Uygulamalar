#include<stdio.h>

float ort(float []);
float sapma(float,int []);

int main()
{
	int notlar[10],i;
	
	printf("Ogrencilerin notlarini girin:");
	for(i=0;i<10;i++)
	scanf("%f",&notlar[i]);
	
	//tamamlanmýþ deðil switck case i kaldý kitapta bir örnekle çalýþtýrýlmýþ hali olmayýp kendi programýmýn doðruluðunu kontrol edemeyeceðimden yapmadým kalanýný
	
}

float ort(float a[]);
{
	int i,top=0;
	float x;
	
	for(i=0;i<10;i++)
		top+=a[i];
		
		x=top/10;
		
		return x;
}

float sapma(float x,int b[])
{
	float sap;
	int karelertop;
	
	for(i=0;i<10;i++)
	karelertop+=b[i]*b[i];
	
	sap=10/9*(karelertop-x);
	
	return sap;
}
