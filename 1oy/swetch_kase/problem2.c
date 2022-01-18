#include <stdio.h>

	int main() {

		char til;
         printf("english = 'e' uzbek = 'u");
		 printf("tilni tanlang\n");
			scanf(" %c", &til);

		switch(til){

				case 'e':printf(" Monday\n tuesday\n wednesday\n thursday\n friday\n saturday\n sunday\n");
				break;
				case 'u':printf(" Dushanba\n seshanba\n chorshanba\n payshanba\n juma\n shanba\n yakshanba\n");
				break;
				default: printf("faqat (e va u) ni tanlang ");


				 }


	



	return 0;
	}
