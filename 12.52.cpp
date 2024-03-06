#include<stdio.h>7                                                                                                                       
float encokyakitvekomsubul(float[])
{
	float daireyakitgider[10]={350.04,351,450.50,90.2,180,162,382,349,761.50,452.50},encokyakit=daireyakitgider[0],komsu;
	int i,komsuno,encok;
		for(i=1;i<=10;i++)
		{
			if(daireyakitgider[i]>encok)
			{
				encokyakit=daireyakitgider[i];
				encok=i;
			}
		}
	if(encok%2==0)
	komsuno=encok+1;
	else if(encok%2!=0)
	komsuno=encok-1;
	komsu=encokyakit-daireyakitgider[komsuno];
	printf("En cok yakit gideri %d numara\n",encok);
	printf("Komsusu ile yakit farki : %.2f TL", komsu);
}
int main()
{
	float daireyakitgider[10]={350.04,351,450.50,90.2,180,162,382,349,761.50,452.50},encok,komsu;
	encokyakitvekomsubul(daireyakitgider);
	//printf("En cok yakit gideri %d numara\n",encok);
	//printf("Komsusu ile yakit farki : %.2f TL", komsu);
	return 0;
}
