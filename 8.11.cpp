#include<stdio.h>
int main()
{
	int sayi,ikibasadet=0,tekbasadet=0,sayac=0;
	//printf("sayi:");    
	//scanf("%d",&sayi);
	while(sayi<100){
	printf("sayi:");   
	scanf("%d",&sayi);  
	if(sayi<=0)         
	{
	printf("yalnizca pozitif sayilar");
	//continue;
    }  
	if(sayi<100&&sayi>=10)
	{
		ikibasadet+=1;
		sayac+=1;
	    //continue;
	}
	else if(sayi<10)
	{
		tekbasadet+=1,
		sayac+=1;
		//continue;
	}
	//printf("sayi:");        Yeni say� al�m i�lemi d�ng�den ��kmadan hemen �nce yaz�nca da "continue"'lerden dolay� ikinci say�y� alm�yor, program kapanm�yor da, duruyor 
	//scanf("%d",&sayi);    sadece tek say� al�p. Bu y�zden illa while d�ng�s� ile yap�lmas� istendi�inden ve k�sa oldu�undan bu �rne�i "continue"'s�z yapabiliriz ama daha 
}                         //uzun sat�rl� programlar i�in "continue" kullanmam�z gerekti�inden ve yeni say� al�m i�leminin d�ng�den ��kmadan hemen �nce yap�lmas� gerekti�inden 
                                           //while d�ng�s� kulanamay�z.
	printf("Girilen %d sayinin %d tanesi tek basamakli, %d tanesi iki basamaklidir.",sayac,tekbasadet,ikibasadet); 
	return 0;
}
