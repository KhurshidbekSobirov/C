#include <stdio.h>



	int main() {

		int a=0,b;
			printf("Enter number\n");
				scanf("%d",&a);

	 while(a > 0){

		     b = a % 10;
            printf("%d",b);
		     	a/=10 ;

			}

            printf("\n");



	return 0;
	}