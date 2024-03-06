#include<stdio.h>
void sadelestir(int pay,int payda)
{
	int obeb,sadepay,sadepayda,yedekpay=pay,yedekpayda=payda;
	while(pay!=payda)
	{
	if(pay>payda)
		pay=pay-payda;
	else if(pay<payda)
	    payda=payda-pay;
	}
	obeb=pay;
	sadepay=yedekpay/obeb;
	sadepayda=yedekpayda/obeb;
	printf("Sadelestirilmis: %d/%d",sadepay,sadepayda);
	
}
int main()
{
	int pay,payda;
	printf("Pay ve paydayi giriniz:");
	scanf("%d %d",&pay,&payda);
	printf("\n--------------------------------\n");
	printf("Onceki degeri: %d/%d\n",pay,payda);
	sadelestir(pay,payda);
	return 0;
}
