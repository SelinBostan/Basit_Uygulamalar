#include<stdio.h>

int icindeVarMi(int[],int[]);

int main()
{
	int dizi1[7]={3,12,1,12,7,3,12};
	int dizi2[3]={12,7,3},c;
	
	printf("Sonuc = %d",icindeVarMi(dizi1,dizi2));
	
	return 0;
}

int icindeVarMi(int a[],int b[])
{
	int sonuc=0,i;
	
	for(i=0;i<5;i++){  //a dizisinin son �� eleman�n� da kontrol etmesi i�in d�ng�y� en son a n�n 4. eleman�nda b�rakmal�y�m(7-3+1)
		if(a[i]==b[0]&&a[i+1]==b[1]&&a[i+2]==b[2])
		sonuc=1;
	}
	
	return sonuc;
}
