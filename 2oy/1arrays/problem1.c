#include <stdio.h>

int main () {

	int numbers[10];
	int index[10];

	for(int i = 0;i < 10;i++){

		scanf("%d",&numbers[i]);
	}

		printf("Array index: ");

	for(int i = 9;i >= 0;i--){

		index[i]=i;
		printf(" %d",index[i]);
	}

		printf("\n");

		printf("Array items: ");

	for(int i = 9;i >= 0;i--){

		printf(" %d",numbers[i]);
	}

		printf("\n");


return 0;
}
