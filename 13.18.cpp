#include<stdio.h>
int main()
{
	int i,j=0;
	char isimler[10][10];
	puts("isimleri girin:");
	for(i=0;i<10;i++)
		scanf("%s",isimler[i]);
	puts("\nisimleri 'an' ile bitenler:");
	for(i=0;i<10;i++){
		while(isimler[i][j]=='\0'){
			if(isimler[i][j-2]=='a'&&isimler[i][j-1]=='n')
				printf("\n%s",isimler[i]);
				j++;
		}
	}
	return 0;
}
