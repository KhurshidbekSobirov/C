#include <stdio.h>

	int main() {

		int a,b;
		printf("butun son kiriting\n");
			scanf("%d",&a);

	 for(a; a > 0; a/=10){

				b = a % 10;
            printf("%d\n",b);
		     	

			}



	return 0;
	}
