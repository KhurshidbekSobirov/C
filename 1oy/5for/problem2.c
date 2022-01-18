#include <stdio.h>

	int main () {

	int a,b,c,start,stop,step;
     scanf("%d %d %d",&a,&b,&c);

		if(a < b && a < c){

			start = a;

				if(b > c){
						step = c;
						stop = b;
					}else {
							stop = c;
							step = b;
						}
		}else if(b < a && b < c){

            start = b;

			if(a > c){
					step = c;
					stop = a;
				}else {
							step = a;
							stop = c;
						}

		}else if(c < a && c < b){

					start = c;

				if(a > b){
						step = b;
						stop = a;
						}else{
								step = a;
								stop = b;
							}
				}

	if(start < stop){

		for (start; start < stop; start = start + step) {
			printf("%d ", start);
		}

				}else {


        for (start; start > stop; start = start + step) {
            printf("%d ", start);

                                        }

   							}

	return 0;
    }
