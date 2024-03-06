#include<stdio.h>
int main()
{
	int a,b,obeb,bolunen,bolen,kalan;
	printf("iki sayi giriniz:");
	scanf("%d %d",&a,&b);
	
	if(a==b){
		obeb=a;
		goto out;
	}

	while(a!=b){
		if(a>b){
			a-=b;
		}
		else{
			b-=a;
		}
		if(a==b){
			obeb=a;
		}
	}
	out:
	printf("obeb=%d",obeb);
	
	return 0;
	
	
}
