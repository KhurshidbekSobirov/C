#include <stdio.h>

int main () {

	int size;
		printf("nechta son kiritmoqchsiz");
		scanf("%d", &size);

	int numbers[size];

	for(int i = 0; i < size;i++){
		scanf("%d", &numbers[i]);
	}
	for(int i = 0;i < size;i++){

		for(int a=i+1;a < size;a++){

			if(numbers[i] > numbers[a]){

			int	c =numbers[i];
				numbers[i] = numbers[a];
				numbers[a] = c;


			}

		}

	}

	for(int b = 0; b < size;b++){

		printf("%d ", numbers[b]);
	}


return 0;
}
