#include<stdio.h>

int ilkbenzersiz(int []);

int main()
{
	int dizi[7]={3,12,1,12,7,3,12},c;
	
	c=ilkbenzersiz(dizi);
	printf("Dizinin ilk benzersizi = %d",c);
	
	return 0;
}

int ilkbenzersiz(int a[])
{
	int i,j,kontrol=0,benzersiz;
	
	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			if(j==i){
				kontrol=2;
				break;
			}
			if(a[i]==a[j]) //ilk �nce sadece else yazm��t�m error verdi
				kontrol=1;	
		}
		if(kontrol==1)
		continue;
		else if(kontrol==0){ //ilk �nce sadece else yazm��t�m error verdi           =====================   DEMEKK� ELSE LE YAZDI�IM SADECE �F TEK�N�N TAM KAR�ITI YA DA �F TEK� DI�INDA HER �EY OLUYORSA SADECE ELSE � KABUL ED�YOR   ========================
		benzersiz=a[i];
		break;
	    }
	}
	
	return benzersiz;
}
