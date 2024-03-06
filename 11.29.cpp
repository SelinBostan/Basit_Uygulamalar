#include<stdio.h>

void tekciftduzenle(int []);

int main()
{
	int a[15],i,duz;
	
	printf("Dizinin elemanlarini giriniz (15 adet):");
	
	for(i=0;i<15;i++)
		scanf("%d",&a[i]);
		
	printf("Dizinin duzenlenmis hali:\n");
	
	tekciftduzenle(a);
	
	return 0;	
}

void tekciftduzenle(int a[])
{
	int yedek,i,j;
	
	for(i=0;i<15;i++){
		for(j=0;j<14;j++){
			if(a[i]%2==0){
			yedek=a[i];
			a[i]=a[i+1];
			a[i+1]=a[i];
			}
		}
	}
	
	for(i=0;i<15;i++)
	printf("%d",a[i]);
	
}
