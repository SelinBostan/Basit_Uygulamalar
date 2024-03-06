#include<stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
void dikdortgenciz()
{
	int satir,sutun,i,j;
	srand(time(NULL));
	satir=10+rand()%20;
	sutun=30+rand()%50;
	for(i=1;i<=sutun;i++)
	printf("-");
	printf("\n");
	for(i=1;i<=(satir);i++)
	{
		printf("|");
		for(j=1;j<=(sutun-2);j++)
		printf("*");
		printf("|");
		printf("\n");
	}
	for(i=1;i<=sutun;i++)
	printf("-");
	
	getch();
}
int main()
{
	dikdortgenciz();
	return 0;
}
