#include <stdio.h>

	int main () {

	 int a;
	  printf("son kiriting\n");
	   scanf("%d",&a);

		if (a % 3 == 0 && a % 5 == 0){

			printf("FizzBazz");

		}else if(a % 3 == 0){

			printf("Fizz");

		}else if(a % 5 == 0){

			printf("Bazz");

		}
    return 0;
	}
