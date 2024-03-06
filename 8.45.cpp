#include<stdio.h>
int main()
{
	int i=15001;
	while(i>15000)
	{
		if(i%3==0)
		{
		
		  printf("15000'den buyuk ve 3'un kuvveti olan en kucuk tamsayi %d\n",i);	
		  printf("Bu sayi 3'un 5001. kuvvetidir");
		  break;
		}
    	i++;	
	}
	return 0;
}
