#include<stdio.h>
void deneme1(int);
int main()
{
	int sayi=7;
	deneme1(sayi);
	return 0;
}
void deneme1(int s)
{
	if(s>3)
	{
	deneme1(s-1);
	printf("%d",s);
    }
}
