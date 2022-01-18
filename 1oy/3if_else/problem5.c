#include <stdio.h>

  int main () {

	int a,b,c,kichik,katta,orta;

   printf("3 ta son kiriting\n");
     scanf("%d %d %d",&a,&b,&c);

		if(a < b && a < c){

			kichik = a;

				if(b > c){
						orta = c;
						katta = b;
					}else {
							katta = c;
							orta = b;
						}
		}else if(b < a && b < c){

            kichik = b;

			if(a > c){
					orta = c;
					katta = a;
				}else {
							orta = a;
							katta = c;
						}

		}else if(c < a && c < b){

					kichik = c;

				if(a > b){
						orta = b;
						katta = a;
						}else{
								orta = a;
								katta = b;
							}
				}

	printf("o'rtachasi %d\n",orta);

	return 0;
	}
