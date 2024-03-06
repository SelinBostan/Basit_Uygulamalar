#include<stdio.h>
int main()
{
	int i=0,sayac=0;
	char cumle[255],h;
	puts("Cumlenizi girin:");
	while((h=getchar())!='.'){
		cumle[i]=h;
		if(cumle[i]=='a'||cumle[i]=='A')
		sayac++;
		i++;
	}
	printf("\nGirdigiiniz cumlede %d adet a ya da A vardir",sayac);
	return 0;
	
}
