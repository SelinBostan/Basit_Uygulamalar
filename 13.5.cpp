#include<stdio.h>
int main()
{
	char kelime[100];
	int i=0,uyar=1,ilksesli,j;
	puts("Dizgiyi girin:");
	scanf("%s",kelime);	
	puts("\n-----------------------------------------");
	while(kelime[i]!='\0'){
		if(kelime[i]=='a'||kelime[i]=='�'||kelime[i]=='o'||kelime[i]=='u'||kelime[i]=='e'||kelime[i]=='i'||kelime[i]=='e')
			ilksesli=i;
		i++;
		break;
	}
	j=ilksesli+1;
	while(kelime[j]!='\0'){
		if(kelime[ilksesli]=='a'||kelime[ilksesli]=='�'||kelime[ilksesli]=='o'||kelime[ilksesli]=='u')
			if(kelime[j]=='e'||kelime[j]=='i'||kelime[j]=='e'){
				uyar=0;
				break;
			}
		else
			if(kelime[j]=='a'||kelime[j]=='�'||kelime[j]=='o'||kelime[j]=='u'){
				uyar=0;
				break;
			}
		j++;
	}
	if(uyar)
		puts("\nBuyuk sesli uyumuna uyar");
	else
		puts("\nBuyuk sesli uyumuna uymaz");	
	return 0;
}

