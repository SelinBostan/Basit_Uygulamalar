#include<stdio.h>
#include<math.h>

int onlukYap(int []);

int main()
{
	int a[10],i;
	
	printf("Sekizlik sayinin rakamlarini giriniz:");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	printf("\n---------------------------------------------\nOnluk karsiligi:%d",onlukYap(a));
	
	return 0;
	
}

int onlukYap(int a[])
{
	int i,top=0,y=0,k=1;
	
	for(i=0;i<10;i++){
		if(a[i]!=0)
		break;
		else 
		y++;
	}
	
	k=y-1;
	
	for(i=(10-y);i<10;i++){
		top+=a[i]*pow(8,k);
		k--;
	}
	
	return top;
	
}
