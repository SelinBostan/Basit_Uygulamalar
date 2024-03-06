#include<stdio.h>
int main()
{
	int sayac,test=1,i;
	printf("1 ile 20 arasindaki asal sayilar\n");
	printf("--------------------------------\n");
	for(i=19;i>1;i--)
{
	test=1; //bu arkadaþý bu satýra yazmazsan boku yersun bebek
	for(sayac=2;sayac<i;sayac++)
	{
	if(i%sayac==0)
	test=0;
    }
	if(test==1)
	printf("%d\t",i);
} 
	return 0;
}
