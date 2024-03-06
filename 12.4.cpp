#include<stdio.h>
void izinCoz(int,int*,int*,int*,int*);
int main()
{
	int kod,r,w,x,p;
	
	printf("Yetki kodunu giriniz:");
	scanf("%d",&kod);
	printf("\n------------------------------------");
	izinCoz(kod,&r,&w,&x,&p);
	printf("\nr-okuma=%d",r);
	printf("\nw-yazma=%d",w);
	printf("\nx-calistirma=%d",x);
	printf("\np-yazdirma=%d",p);
	
	return 0;
}
void izinCoz(int kod,int*rp,int*wp,int*xp,int*pp)
{ 
	int i=3,a[4];
	
	while(kod>2){
	a[i]=kod%2;
	i--;
	kod=kod/2;
    }
    a[3]=*rp;
    a[2]=*wp;
    a[1]=*xp;
    a[0]=*pp;
}
