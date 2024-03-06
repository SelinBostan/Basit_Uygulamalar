#include<stdio.h>

int Hamming(int [],int []);

int main()
{
	int i,a[10],b[10];
	
	printf("Birinci dizinin elemanlarini girin:");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	printf("\nikinci dizinin elemanlarini girin:");
	for(i=0;i<10;i++)
	scanf("%d",&b[i]);
	
	printf("iki dizi arasindaki Hamming uzakligi:%d",Hamming(a,b));
	
	return 0;

}

int Hamming(int a[],int b[])
{
	int i,sayac=0;
	
	for(i=0;i<10;i++)
		if(a[i]!=b[i])
		sayac++;
		
		return sayac;
}
