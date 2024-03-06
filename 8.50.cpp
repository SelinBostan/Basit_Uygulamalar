#include<stdio.h>
int main()
{
	int a,b,x,y,zincir;
	printf("OBEB'i bulunacak sayilari giriniz=");
	scanf("%d %d",&x,&y);
	while(x<0||y<0)
	{
	printf("\nYanlis!!! Lutfen sayilarin her ikisinide pozitif olarak giriniz");
	printf("\nOBEB'i bulunacak sayilari giriniz=");
	scanf("%d %d",&x,&y);
	a=x;
	b=y;
    }
	while(x!=y)
	{
		if(x>y)
		{
			x=x-y;
			zincir+=1;			
		}
		else if(x<y)
		{
			y=y-x;
			zincir+=1;			
		}
	}
	printf("\n----------------------------------------");
	printf("\nOBEB(%d,%d) = %d",a,b,x);
	printf("\nOBEB cikarma zinciri = %d",zincir);

	return 0;    
}
