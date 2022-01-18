#include <stdio.h>

int main() {

	int numbers[10];
	int max,min;

	for(int i = 0;i < 10;i++){

		scanf("%d",&numbers[i]);
	}

	max = numbers[0];
	min = numbers[0];

	for(int i = 0; i < 10;i++){

		if(max < numbers[i]) max = numbers[i];

		if(min > numbers[i])min = numbers[i];

	}

		printf(" Max: %d\n Min: %d\n",max,min);



return 0;
}
