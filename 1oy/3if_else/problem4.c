#include <stdio.h>

	int main () {

     int a, b, c, d;

      printf("to'rtta son kiriting\n");
	   scanf("%d %d %d %d",&a , &b, &c, &d);

		 if(a % 2 == 0 && b % 2 == 0){

        	printf("%d %d %d %d",a ,b ,c ,d);  

		}else if (c % 2 == 0 && d % 2 == 0 ){

			printf("%d %d %d %d",a ,b ,c ,d);

		}

		if(a % 2 == 0 && d % 2 == 0){

            printf("%d %d %d %d",a ,b ,c ,d);  

        }else if (b % 2 == 0 && c % 2 == 0 ){

            printf("%d %d %d %d",a ,b ,c ,d);

        }

		if(b % 2 == 0 && d % 2 == 0){

            printf("%d %d %d %d",a ,b ,c ,d);  

        }else if (a % 2 == 0 && c % 2 == 0 ){

            printf("%d %d %d %d",a ,b ,c ,d);

        }


    return 0;
	}
