#include<stdio.h>
int main(){
	int nabiz,endusuknabiz=101,tasikardi=59;
	char kategori,y,c,b;
	printf("Nabiz degerlendirme programina hos geldiniz\n(Sonlandirmak icin kategoriye b:bitir veya nabiz degerini 0 giriniz)\n");
	printf("\n-------------------------------------------------\n");
	scanf("%c %d",&kategori,&nabiz);
	while(kategori!=b||nabiz!=0){
	switch (kategori)
	{
		case'y':
			if(nabiz<60)
			printf("Nabiz dusuk\n\n");
			else if(nabiz>100)
			printf("Nabiz yuksek\n\n");
			else if(nabiz<100&&nabiz>60)
			printf("Nabiz normal\n\n");
			if(nabiz>tasikardi)
			tasikardi+=1;
		case'c':
			if(nabiz<80)
			printf("Nabiz dusuk\n\n");
			else if(nabiz>100)
			printf("Nabiz yuksek\n\n");
			else if(nabiz<100&&nabiz>80)
			printf("Nabiz normal\n\n");
			if(nabiz>endusuknabiz)
			endusuknabiz=nabiz;
		default:
			printf("Yanlis kategori \n");
	}
			if(nabiz<0)
		printf("Yanlis kategori veya nabiz degeri\n");
					
			scanf("%c %d",&kategori,&nabiz);	
}
printf("----------------------------------------------------\n");
printf("Program sona erdi\n");
printf("Cocuklarda en dusuk nabiz degeri: %d",endusuknabiz);
printf("Yetiskinlerde tasikardi sayisi: %d",tasikardi);
return 0 ;
}
