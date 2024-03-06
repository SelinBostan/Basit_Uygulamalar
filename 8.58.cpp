#include<stdio.h>
int main()
{
	int Kbugun=10000,Tbugun=10000,i,Tyarin,Kyarin;
	for(i=1;i<=100;i++)
	{
		Tyarin=(1+0.005)*Tbugun-0.00001*Tbugun*Kbugun;
		Kyarin=(1-0.005)*Kbugun+0.00001*0.01*Tbugun*Kbugun;
		Tbugun=Tyarin;
		Kbugun=Kyarin;	
	}
	printf("100 gun sonraki kurt sayisi: %d, tavsan sayisi: %d",Kbugun,Tbugun);
	return 0;
}
