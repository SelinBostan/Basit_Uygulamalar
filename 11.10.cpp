#include<stdio.h>

int main()
{
	int a[50]={0},i,j;
	
	for(i=1;i<=10;i++){
		for(j=0;j<50;j++){
			if((j+1)%i==0&&j>i){   //lamba numarasý dizideki indisinin bir fazlasý olduðundan j+1
				if(a[j]==1)
				a[j]=0;
				
				else
				a[j]=1;
			}
		}
	}
	
	printf("Yanik lambalar\n");
	for(i=0;i<50;i++){
		if(a[i]==1)
		printf("%d,",i);
	}
	
	printf("\n");
	
	printf("Sonuk lambalar\n");
	for(i=0;i<50;i++){
		if(a[i]==0)
		printf("%d,",i);
	}
	
	return 0;
}



