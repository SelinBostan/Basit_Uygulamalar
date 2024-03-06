#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sayac=0,i,k,h1,h2,m1,m2,s1,s2,ilkikucuk=1;
	char zaman1[8],zaman2[8],h1s[2],h2s[2],m1s[2],m2s[2],s1s[2],s2s[2];
	puts("Birinci zamani girin:");
	scanf("%s",zaman1);
	puts("\nikinci zamani girin:");
	scanf("%s",zaman2);
	puts("\n--------------------------------------");
	for(i=0;i<2;i++){
		h1s[i]=zaman1[i];
		h2s[i]=zaman2[i];	
	}	
	k=3;
		for(i=0;i<2;i++){
		m1s[i]=zaman1[k];
		m2s[i]=zaman2[k];
		k++;	
	}
	k=6;
		for(i=0;i<2;i++){
		s1s[i]=zaman1[6];
		s2s[i]=zaman2[6];
		k++ ;
	}
	h1=atoi(h1s);
	h2=atoi(h2s);
	m1=atoi(m1s);
	m2=atoi(m2s);
	s1=atoi(s1s);
	s2=atoi(s2s);
	
	if(h1>h2)
	ilkikucuk=0;
	
	if(ilkikucuk){
		while(h1!=h2&&m1!=m2&&s1!=s2){
			s1++;
			sayac++;
			if(s1==60)
				m1++;
			if(m1==60)
				h1++;
	}
	}
	printf("Aradaki fark : %d saniyedir",sayac);
	return 0;
}
