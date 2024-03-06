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
	else if(a>b)
	{
	   bolunen=a;
	   bolen=b;	
	}
	else
	{
		bolunen=b;
		bolen=a;
	}
	while(kalan!=0)
	{
		kalan=bolunen%bolen;
		if(kalan==0){
			obeb=bolen;
		}
		else{
		bolunen=bolen;
		bolen=kalan;
		}
	}
	out:
	printf("obeb=%d",obeb);
	
	return 0;
	
	
}
