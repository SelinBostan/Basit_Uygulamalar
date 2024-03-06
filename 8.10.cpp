#include<stdio.h>
int main()
{
	float T=1.0;
	int x,n,a=-1,i,j;
	printf("x ve n degerini giriniz:");
	scanf("%d %d",&x,&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			x*=x;
		}
		T+=a*(float)x/i;
		a*=-1;
	}
	
		printf("T= %.2lf",T);

	return 0;
}
