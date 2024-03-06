#include<stdio.h>
#include<math.h>
void ucgen_mi(float a,float b,float c)
{
	if(a<(b+c)&&a>abs(b-c))
	{
		if(b<(a+c)&&b>abs(a-c))
		{
			if(c<(b+a)&&c>abs(a-b))
			printf("Ucgen olusturur");
			else 
        	printf("Ucgen olusturmaz");
		}
	else 
	printf("Ucgen olusturmaz");
	}
	else 
	printf("Ucgen olusturmaz");
}
	
int main()
{
	float a,b,c;
	printf("Ucgenin kenar uzunluklarini girin:");
	scanf("%f %f %f",&a,&b,&c);
	ucgen_mi(a,b,c);
	return 0;

}
