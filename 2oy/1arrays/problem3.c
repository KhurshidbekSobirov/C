#include <stdio.h>

int main() {

	int numbers[10],juft = 0, toq = 1;

	for(int i = 0;i < 10;i++){

		scanf("%d",&numbers[i]);
	}


	for(int i = 0; i < 10;i++){

		if(numbers[i] % 2 != 0){

			toq *= numbers[i];
		}else{

			juft += numbers[i];

		 }



	}

		printf("Odds: %d\nEvens: %d\n",toq,juft);

return 0;
}
