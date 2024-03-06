#include<stdio.h>
int main()
{
	int i,j,bolensayisi,sayi,enbuyukbolensayisi=0;
		
	for(i=2;i<1000;i++)
	{
		bolensayisi=0;
		for(j=1;j<i;j++)
		{
	   		if(i%j==0)
			bolensayisi+=1;
		}
		if(i==2)
		enbuyukbolensayisi=bolensayisi;
		if(bolensayisi>enbuyukbolensayisi)
		{
		enbuyukbolensayisi=bolensayisi;
		sayi=i;
	    }
	}
	printf("Boleni en cok olan sayi %d (Bolen sayisi %d )",sayi,enbuyukbolensayisi);
	return 0;
}
