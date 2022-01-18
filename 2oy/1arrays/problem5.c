#include <stdio.h>

int main () {

	int numbers[10];


	for(int i = 0;i < 10;i++){
		scanf("%d",&numbers[i]);

	}

	int check = 0;
	for(int i = 0;i < 10;i++){

			if(numbers[i] > numbers[i+1]){
			check = 0;

		}else {

		   check = 1;
		}


	}

	if(check <= 0){

		printf("DECREASING ARRAY");

	}else if(check >= 1){

		printf("INCREASING ARRAY");

	 }


return 0;
}
