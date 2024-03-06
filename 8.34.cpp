#include<stdio.h>
int main()
{
	int i,son2,ilk2,top;
	printf("Sayilar\t");
	for(i=1000;i<10000;i++)
	{
		son2=i%100;
		//ilk2=(i-son2)/100;
		ilk2=i/100;
		top=ilk2+son2;
		if(i==top*top)
		printf("%d\t",i);
	}
	return 0;
}
