#include<stdio.h>
void ayristir(int,int*,int*,int*);
int main()
{
	int serino,blokno,daireno,aracno;
	char blok;
	
	printf("Serino'yu girin:");
	scanf("%d",&serino);
	
	ayristir(serino,&blokno,&daireno,&aracno);
	if(blokno==1)
		blok='A';
	if(blokno==2)
		blok='B';
	else
		blok='C';
	printf("Bu arac %c blokta %d nolu dairenin %d. aracidir",blok,daireno,aracno);
	
	return 0;
}
void ayristir(int serino,int *bloknop,int *dairenop,int *aracnop)
{
	*aracnop=serino%10;
	*dairenop=(serino/10)%100;
	*bloknop=(serino-(serino%1000))/1000;
}
