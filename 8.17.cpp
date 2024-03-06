//Y=Maymunun o ana kdar yediði toplam muz sayýsý
//M=Maymunun kafese giriþ sayýsý
#include<stdio.h>
int main()
{
	int Y=0,M,i,j;
	char Cinsiyet;
	
	do{
	printf("Maymunun cinsiyetini giriniz(Erkek E/e, Diþi D,d):");
	scanf("%c",&Cinsiyet);
	printf("Maymun kac kez kafese girdi:");
	scanf("%d",&M);
	printf("-----------------------------------------------------\n");	
	}
	while(M<0);
	
	for(i=1;i<=M;i++){
		if(i<5){
			Y+=i;
		}
		else{
			Y+=(Y-M)/2+1;
		}
		switch(Cinsiyet){
			case'E':
			case'e':printf("%d. girisinde toplamda %d muz yemis oldu\n",i,2*Y);
			case'D':
			case'd':printf("%d. girisinde toplamda %d muz yemis oldu\n",i,Y);
		}
	}
	
	return 0;
	
}
