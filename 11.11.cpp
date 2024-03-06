#include<stdio.h>
void rotate(int[],int,int);
int main()
{
	int n=10,a[n],i,dondurme;
	
	printf("Dizinin elemanlarini girin:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nDondurme miktarini giriniz:");
	scanf("%d",dondurme);
	printf("\n--------------------------------------");
	
	rotate(a,n,dondurme);
	printf("\nDizinin son hali =");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	
	return 0;
}
void rotate(int a[],int n,int dondurme)
{
	int i,j,yedek;
	
	for(i=1;i<=dondurme;i++){
		yedek=a[0];
			for(j=0;j<(n-1);j++){   //son elemandan bir sonra eleman yok ve biz onu ayrýca ilk elemana eþitlicez diye n-1
				a[i]=a[i+1];
			}
		a[n-1]=a[0];
	}
}
