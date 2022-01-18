#include <stdio.h>


//qo'shish
/*

int qosh (int a, int b,int c){

         a += b, a += c;
    return a;
}

*/

//tub son

int tub(int a){

    for(int i = 2;i < a;i++){
        if(a % i == 0) {
            return 0;
        }
    }
    return 1;

}

//daraja
/*
int daraja(int a,int b,int c){

    c = a;

    for(int i = 0; i < (b-1);i++){


        c *= a;

    }

    return c;
}
*/

//factorial

/*
int fact(long a){

    if (a == 1) return a;
    return fact(a - 1) * a;
}
*/

int main () {

    int a,b = 0,i = 4;

    scanf("%d",&a);

    int natija = tub(a);

    printf("%d \n",natija);

    return 0;
}