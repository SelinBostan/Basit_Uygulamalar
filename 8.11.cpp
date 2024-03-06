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
	//printf("sayi:");        Yeni sayı alım işlemi döngüden çıkmadan hemen önce yazınca da "continue"'lerden dolayı ikinci sayıyı almıyor, program kapanmıyor da, duruyor 
	//scanf("%d",&sayi);    sadece tek sayı alıp. Bu yüzden illa while döngüsü ile yapılması istendiğinden ve kısa olduğundan bu örneği "continue"'süz yapabiliriz ama daha 
}                         //uzun satırlı programlar için "continue" kullanmamız gerektiğinden ve yeni sayı alım işleminin döngüden çıkmadan hemen önce yapılması gerektiğinden 
                                           //while döngüsü kulanamayız.
	printf("Girilen %d sayinin %d tanesi tek basamakli, %d tanesi iki basamaklidir.",sayac,tekbasadet,ikibasadet); 
	return 0;
}
