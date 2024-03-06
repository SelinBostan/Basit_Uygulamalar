#include<stdio.h>
int main()
{
	int K=0,Y=0,Si=0,Sa=0,kod;

	
	while (kod!=111)
	{
			printf("Kod giriniz (1,2,3,4 ya da cikmak icin 111):");
	scanf("%d",&kod);
	switch(kod)
	{
		case 1:K+=1;continue;
		case 2:Y+=1;continue;
		case 3:Sa+=1;continue;
		case 4:Si+=1;continue;
		default:printf("HATA!! Lutfen gecerli bir ");
		continue;	
	}

}
	printf("Gun sonu satis raporu:\n%d kirmizi, %d yesil, %d sari, %d siyah oje satilmistir",K,Y,Sa,Si);
	return 0;
	
}
