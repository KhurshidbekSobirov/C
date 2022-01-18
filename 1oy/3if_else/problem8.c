#include <stdio.h>

	int main() {

		int a;
			printf("burchakni kiriting\n");

				scanf("%d",&a);

		if(a > 90 && a < 180 || a < 270 && a > 180){

					printf("O'tmas burchak");
				}else if(a < 90){

							printf("O'tkir burchak");
						}else if (a == 90 || a == 270){

									printf("To'g'ri burchak");
								}else if(a == 180 || a == 360){


											printf("yoyiq burchak");
										}




	return 0;
	}
