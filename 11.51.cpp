#include<stdio.h>

float ort(float []);
float sapma(float,int []);

int main()
{
	int notlar[10],i;
	
	printf("Ogrencilerin notlarini girin:");
	for(i=0;i<10;i++)
	scanf("%f",&notlar[i]);
	
	//tamamlanm�� de�il switck case i kald� kitapta bir �rnekle �al��t�r�lm�� hali olmay�p kendi program�m�n do�rulu�unu kontrol edemeyece�imden yapmad�m kalan�n�
	
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
