#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=2,j,k=0,m,n,x,y;
	char islem[100],ms[100],ns[100];
	puts("Dogru denklemini giriniz:");
	scanf("%s",islem);
	puts("\nx degerini giriniz =");
	scanf("%d",&x);
	while(islem[i]!='x'){
		ms[k]=islem[i];
		j=i;
		i++;
		k++;
	}
	j=j+2;
	i=0;
	while(islem[j]!='\0'){            //burada i yerine k kullan�rsan ba�ta k=0 demeden program yanl�� sonu� verir ��nk� k n�n de�erini ilk d�ng�yle de�i�tirdik
		ns[i]=islem[j];
		i++;
		j++;
	}
	m=atoi(ms);
	n=atoi(ns);
	puts("\n----------------------------------");
	y=m*x+n;
	printf("y = %d",y);
	return 0;
}
