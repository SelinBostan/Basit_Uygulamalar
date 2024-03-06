#include<stdio.h>
void ayristir(int,int *,int *,int *);
int main()
{
	int gun,yil=0,ay=0,gun2=0;
	
	printf("Gun sayisini girin =");
	scanf("%d",&gun);
	printf("\n--------------------------------");
	ayristir(gun,&yil,&ay,&gun2);
	printf("\nBu sure %d yil, %d ay, %dgun eder",yil,ay,gun2);
	return 0;
}
void ayristir(int gun,int*yilp,int*ayp,int*gun2p)
{
	if(gun>360)
		*yilp=gun/365;
	gun=gun%365;
	if(gun>30)
		*ayp=gun/30;
	*gun2p=gun%30;
}
