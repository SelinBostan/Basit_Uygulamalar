#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <time.h>
void bahaneyaz()
{
	int a;
	a=1+rand()%10;
	switch(a)
	{
		case'1':printf("Bu isin arkasinda Amerika vardir");	
		case'2':printf("Bu isin arkasinda Japonya vardir");
		case'3':printf("Bu isin arkasinda Ispanya vardir");
		case'4':printf("Bu isin arkasinda Fransa vardir");
		case'5':printf("Bu isin arkasinda Rusya vardir");
		case'6':printf("Bu isin arkasinda Katar vardir");
		case'7':printf("Bu isin arkasinda Almanya vardir");
		case'8':printf("Bu isin arkasinda Ingiltere vardir");
		case'9':printf("Bu isin arkasinda Cin vardir");
		case'10':printf("Bu isin arkasinda Turkiye vardir");
	}	
}
int main()
{
	srand(time(NULL));
	bahaneyaz();
	return 0;
	getch();
}
