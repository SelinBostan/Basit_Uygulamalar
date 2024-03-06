#include<stdio.h>
void tekCiftSay(int,int*,int*);
int main()
{
	int sayi,tek,cift;
	printf("Sayiyi girin :");
	scanf("%d",&sayi);
	printf("\n---------------------------------");
	tekCiftSay(sayi,&tek,&cift);
	printf("\n%d sayisinda %d adet tek, %d adet cift rakan vardir",sayi,tek,cift);
	return 0;
}
void tekCiftSay(int sayi,int *tekp, int *ciftp)
{
	 while (sayi > 0){            
        if((sayi%10)%2==0)
			*ciftp++;
		else if((sayi%10)==0)
			continue;
		else
			*tekp++;     
        sayi = sayi/10;  
    } 
}
