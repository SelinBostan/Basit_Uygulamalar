
#include<stdio.h>
int main()
{
	int a,b,x,y,zincir,obeb,okek;
	printf("OKEK'i bulunacak sayilari giriniz=");
	scanf("%d %d",&x,&y);
	while(x<0||y<0)
	{
	printf("\nYanlis!!! Lutfen sayilarin her ikisinide pozitif olarak giriniz");
	printf("\nOKEK'i bulunacak sayilari giriniz=");
	scanf("%d %d",&x,&y);
	a=x;
	b=y;
	continue;
    }
	while(x!=y)
	{
		if(x>y)
			x=x-y;
		else if(x<y)
			y=y-x;
	}
	
	obeb=x;
	okek=(a*b)/obeb;
	
	printf("\n----------------------------------------");
	printf("\nOKEK(%d,%d) = %d",a,b,okek);

	return 0;    
}
