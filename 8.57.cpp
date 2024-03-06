#include<stdio.h>
int main()
{
	int a,b,i,j;
	float c,d;
	for(i=10;i<100;i++)
	{
		a=i/10;
		for(j=10;j<100;j++)
		{
			b=j%10;
				if((i!=j)&&(a!=b)){
					
					c=(float)a/b;
					d=(float)i/j;
					
					if(c==d){
					printf("%d    %d\n",i,a);
					printf("--- = ---\n");
					printf("%d    %d\n\n",j,b);
					}	
				}
		}	
	}

	return 0;    
}
