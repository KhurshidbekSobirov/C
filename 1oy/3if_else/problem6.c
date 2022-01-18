#include <stdio.h>

	int main() {

		int a;
		char b;
      scanf("%d %c", &a, &b);

		if(a >= 0 && a <= 10){

				printf("number\n");
			}else if(b >= 'a' && b <= 'z'){

					printf("letter\n");
				}else {

						printf("null\n");
					}

	return 0;
    }
