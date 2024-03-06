#include<stdio.h>
int main()
{
	int konukyas,talipyas,yaslitalip=0,genctalip=0,denktalip=0,toplamtalip=0,talipyastoplami=0;
	float ort,a,b;
	printf("Konugun yasini giriniz:");
	scanf("%d",&konukyas);
	
	printf("Talibin yasini giriniz:");
	scanf("%d",&talipyas);

	while(talipyas!=0)
	{
	talipyastoplami+=talipyas;
	if(talipyas<konukyas)
	genctalip+=1;
	else if(talipyas>konukyas)
	yaslitalip+=1;
	else if(konukyas==talipyas)
	denktalip+=1;
		printf("Talibin yasini giriniz:");
	scanf("%d",&talipyas);
    }
    toplamtalip=yaslitalip+genctalip+denktalip;
    ort=talipyastoplami/toplamtalip;
	//genctalip-=1;//döngüyü sonlandýrmak için 0 girdiðimizde bunu da talip yaþý olarak algýlýyor olduðundan------bunu talibin yasýný döngüden çýkmadan hemen önce alarak da
	printf("-------------------------------------------\n");                                                                                                  //halledebiiliriz
    printf("Konuktan daha yasli taliiplerin sayisi = %d\n",yaslitalip);
    printf("Konuktan daha genc taliiplerin sayisi = %d\n",genctalip);
    printf("Konugun yasina denk taliiplerin sayisi = %d\n",denktalip);
    printf("Taliplerin yas ortalamasi = %f",ort);

	return 0;
	
}
