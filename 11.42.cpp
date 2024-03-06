#include<stdio.h>

void icindeVarMi(int[],int[]);

int main()
{
	int dizi1[7]={3,12,1,12,7,3,12};
	int dizi2[2]={3,12},i;
	
	icindeVarMi(dizi1,dizi2);
	
	for(i=0;i<7;i++)
	printf("%d,",dizi1[i]);
	
	return 0;
}

void icindeVarMi(int a[],int b[])
{
	int sonuc=0,i;
	
	for(i=0;i<6;i++){  //a dizisinin son 2 elemanýný da kontrol etmesi için döngüyü en son a nýn 4. elemanýnda býrakmalýyým(7-2+1)
		if(a[i]==b[0]&&a[i+1]==b[1]){
			a[i]=0;
			a[i+1]=0;
		}
	}

}
