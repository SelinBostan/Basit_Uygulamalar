#include<stdio.h>
int deneme1(int,int);
int main()
{
	int us=3,taban=2;
	printf("%d",deneme1(us,taban));
	return 0;
}
int deneme1(int us,int taban)
{
	if(us=1)
	return taban;
	else
	return taban*deneme1((us-1),taban);
}

