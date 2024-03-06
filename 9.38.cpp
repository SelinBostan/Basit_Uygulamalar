#include<stdio.h>
#include<math.h>
int icindeVarMi(int sayi,int rakam)
{
	int basamaksayisi,i,sayac2=0,d,e;
	float a=-1.0,b=1.0;
	while(a!=sayi)
	{
		e=pow(10,b);
		a=e%sayi;
		b++;
	}
	basamaksayisi=b;
	printf("basamak sayisi=%d",basamaksayisi);
	if(basamaksayisi==1)
	{
		if(rakam==sayi)
		sayac2=1;
	}
	for(i=basamaksayisi;i>=2;i--)
	{
		d=sayi/pow(10,basamaksayisi-1);
		if(rakam==d)
		sayac2++;
		sayi=sayi-(d*pow(10,basamaksayisi-1));
	}
	return sayac2;
}
int main()
{
	int sayi,rakam;
	printf("sayiyi ve icinde aramak istediginiz rakami girin :");
	scanf("%d %d",&sayi,&rakam);
	printf("\n%d",icindeVarMi(sayi,rakam));
	
	return 0;
}
