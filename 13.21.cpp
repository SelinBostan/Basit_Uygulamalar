#include <stdio.h>
#include <string.h>

int main()
{
	char isimler[5][10],tmp[10];
	int i, j;
	
	printf("isimleri girin :\n");
	
	for (i = 0; i <5; i++)
		scanf("%s", isimler[i]);
	
	for (j = 0; j< 5 ; j++){
		for (i =0; i < 4; j++){
			if (strcmp(isimler[i], isimler[i+1]) > 0){
				strcpy(tmp, isimler[i]);
				strcpy(isimler[i], isimler[i+1]);
				strcpy(isimler[i+1], tmp);
			}
		}
	}
	printf("\n----------------------------------------");
	printf("\nSiralanmis hali");
	printf("\n------------------------------------------");
	for (i = 0; i < 5; i++)
		printf("\n%s",isimler[i]);
}
