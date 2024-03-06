#include<stdio.h>
int main()
{
	int i,k=0,l=2,a[3][3]={{2,1,7},{6,4,3},{8,3,0}},top=0,j;
	
	for(i=0;i<3;i++){
		top+=a[i][i]+a[k][l];
		k++;
		l--;
	}
	
	top-=a[1][1];
	
	printf("%d",top);
	
	return 0;
}
