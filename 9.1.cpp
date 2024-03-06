#include<stdio.h>
#include<math.h>
double cekimkuvveti(long M1,long M2,double R)
{
	double F,G=6.673/pow(10.0,11.0);
	F=G*M1*M2/(R*R);
	return F;	
}
int main()
{
	long M1,M2;
	double R;
	
	printf("Cisimlerin agirliklarini giriniz (kg) :");
	scanf("%ld,%ld",&M1,&M2);
	printf("\nCisimlerin aralarindaki uzakligi giriniz (m) :");
	scanf("%lf",&R);
	printf("\n--------------------------------------------\n");
	cekimkuvveti(M1,M2,R);
	printf("Cekim kuvveti = %.6lf Newtondur");
	return 0;
       
}
