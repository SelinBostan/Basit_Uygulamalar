#include<stdio.h>

void frek(int []);

int main()
{
	int dizi[10]={4,1,9,6,1,1,3,5,3,4};
	
    frek(dizi);	
    
	return 0;
}

void frek(int a[])
{
	int i,j,frekans[10]={0};
	
	for(i=0;i<10;i++){
		for(j=0;j<7;j++){
			if(a[i]==a[j]){ 
				frekans[i]+=1;	
			}
		}
	}
	
	for(i=0;i<10;i++)
	printf("%d sayisndan %d tane\n",a[i],frekans[i]);


}
