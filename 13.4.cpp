#include<stdio.h>
#include<ctype.h>
int main()
{
	char cumle[100],h;
	int i=0;
	puts("Dizgiyi girin:");
	while((cumle[i]=getchar())!='.'){
		if(islower(cumle[i]))
		cumle[i]=toupper(cumle[i]);
		else
		cumle[i]=tolower(cumle[i]);
		i++;
	}
	printf("Sonuc dizgi : %s",cumle);
	return 0;
}

