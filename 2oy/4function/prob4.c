#include <stdio.h>

int tekshir(char a){

    if(a >= 65 && a <= 90 && a > 97 && a < 122){
         printf("0\n");
    }else  if(a >= '0' && a <= '9') {
        printf("1\n");
    }else  printf("-1\n") ; 

    return 0; if(a >= '0' && a <= '9') printf("1\n");
}

int main () {

    char a;

    printf("ENTER ONE SYMBOL: ");
    scanf("%c",&a);

    tekshir(a);

    return 0;
}