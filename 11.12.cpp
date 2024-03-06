#include<stdio.h>

int ilkTekrarlayan(int []);

int main()
{
	int dizi[7]={3,12,1,12,7,7,12},c;
	
	c=ilkTekrarlayan(dizi);
	printf("Dizinin ilk tekrarlayani = %d",c);
	
	return 0;
}

int ilkTekrarlayan(int a[])
{
	int i,j,kontrol=0,ilktek;
	
	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			if(j==i)
			break;
			if(a[i]==a[j]){ //ilk önce sadece else yazmıştım error verdi (BKZ 11.13)
				ilktek=a[i];
				kontrol=1;	
			}
		}
		if(kontrol==1)
		break;
	}
	
	return ilktek;
}
