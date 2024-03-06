#include<stdio.h>
#include<ctype.h>
int main()
{
	int i=0,j;
	char cumle[100];
	puts("Dizgiyi girin :");
	while((cumle[i]=getchar()))
		i++;
	for(j=0;j<(i-1);j++){
		if(cumle[i]==' ')
			cumle[i+1]=toupper(cumle[i+1]);
	}
	printf("%s",cumle);
	
	return 0;
}

