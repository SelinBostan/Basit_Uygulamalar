#include<stdio.h>
int main()
{
	int i,birler,onlar,yuzler,binler,B=1,O=1,Y=1,Bin=1,j;
	for(i=1000;i<10000;i++)
	{
	birler=i%10;
	i/=10;
	onlar=i%10;
	i/=10;
	yuzler=i%10;
	i/=10;
	binler=i;
	for(j=1;j<=birler;j++)
	B*=birler;
	for(j=1;j<=onlar;j++)
	O*=onlar;
	for(j=1;j<=yuzler;j++)
	Y*=yuzler;
	for(j=1;j<=binler;j++)
	Bin*=binler;
	if(i=B+O+Y+Bin)
	printf("abcd=%d",i);	
	}
	return 0;
}
