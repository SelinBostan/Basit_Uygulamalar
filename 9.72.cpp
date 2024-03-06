#include<stdio.h>
#include<math.h>
int fact(int);
float kombinasyon(int,int);
int main()
{
	int n,r;
	float p;
	printf("n ve r degerleri :");
	scanf("%d %d",&n,&r);
	printf("\n--------------------------------------\n");
    printf("C(n,r) = %.2f",kombinasyon(n,r));
	return 0;	
}
int fact(int sayi)
{
	int sonuc=1;
	while(sayi!=1)
	{
		sonuc*=sayi;
		sayi--;
	}
	return sonuc;
}
float kombinasyon(int n,int r)
{
	int a=abs(n-r);
	float sonuc2;
	sonuc2=fact(n)/(fact(a)*fact(r));
	return sonuc2;
}
