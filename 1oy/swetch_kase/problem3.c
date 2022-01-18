      #include <stdio.h>

	int main () {

		printf(" Toshkent metro politeni bekatlari\n");
		printf("liniyalar  nomi        kodi\n");
		printf("chilonzor               1\n");
		printf("O'zbekiston             2\n");
		printf("Yunusobot               3\n");
		
		int n;
		scanf("%d",&n);
			printf("siz %d linyadasiz\n",n);
		switch (n){
				case 1: 
					printf("bekat raqamini tanlang\n");
					printf(" 1 olmazor\n 2 chilonzor\n 3 Mirzo ulug'bek\n 4 novza\n 5 milliy bog\n 6 xalqlar dostligi\n 7 paxtakor\n ");
					int son1;
					scanf("%d",&son1);
							printf("siz %d - bekatdasiz oxirgi bekat paxtakor\n",son1);

					switch(son1){
							case 1: printf(" olmazor\n ");
							case 2: printf(" chilonzor\n");
							case 3: printf(" mirzo ulugbek\n");
							case 4: printf(" novza\n");
							case 5: printf(" milliy bog\n");
							case 6: printf(" xalqlar dostligi\n");
							case 7: printf(" paxtakor\n");	
							break;
							default: printf("siz chilonzor liniyasida korsatilmagan bekat kodini kiritdingiz: ");
							}break;

                case 2: 
                    printf("bekat raqamini tanlang\n");
                    int son2;
                    scanf("%d",&son2);
                            printf("siz %d - bekatdasiz oxirgi bekat dostlik\n",son2);

                    switch(son2){
                            case 1: printf(" beruniy\n ");
                            case 2: printf(" tinchlik\n");
                            case 3: printf(" chorsu\n");
                            case 4: printf(" gafur gulom\n");
                            case 5: printf(" alisher navoiy\n");
                            case 6: printf(" uzbekistan\n");
                            case 7: printf(" kosmanftlar\n");
							case 8: printf(" oybek\n");  
						    case 9: printf(" toshkent\n");
                            case 10: printf(" mashinasozlar\n");
                            case 11: printf(" dostlik\n");  

                            break;
                            default: printf("siz o'zbekiston liniyasida korsatilmagan bekat kodini kiritdingiz: ");
                            }break;

                case 3: 
                    printf("bekat raqamini tanlang\n");
                    int son3;
                    scanf("%d",&son3);
                            printf("siz %d - bekatdasiz oxirgi bekat ming o'rik\n",son3);

                    switch(son3){
                            case 1: printf(" turkiston\n ");
                            case 2: printf(" yunusobod\n");
                            case 3: printf(" fayzulla xojayev\n");
                            case 4: printf(" shahriston\n");
                            case 5: printf(" bodomzor\n");
                            case 6: printf(" minor\n");
                            case 7: printf(" abdulla qodiriy\n");  
                            case 8: printf(" yunus rajabiy\n");
                            case 9: printf(" ming orik\n"); 
                            break;
                            default: printf("siz yunusobod  liniyasida korsatilmagan bekat kodini kiritdingiz: ");
                            }



		}

	return 0;
	}
