#include <stdio.h>

int main () {

	int numbers[10];
	int index[10];

	for(int i = 0;i < 10;i++){

		scanf("%d",&numbers[i]);
	}


	for(int i = 0;i < 10;i++){

		index[i] = i;

		if(index[i] == numbers[i]){

			 printf("true %d\n",numbers[i]);

		}else printf("false %d\n",numbers[i]);


	}
		printf("\n");


return 0;
} 
