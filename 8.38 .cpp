#include<stdio.h>
int main()
{
	int toplam=0,i,j;
	printf("1 ile 100 arasindaki mukemmmel sayilar\n");
	printf("--------------------------------------\n");
		
	for(i=2;i<1000;i++)
	{
		for(j=1;j<i;j++)
		{
	   		if(i%j==0)
			toplam+=j;
		}
		if(toplam==i)
		printf("%d,",i);
	}
	return 0;
}
