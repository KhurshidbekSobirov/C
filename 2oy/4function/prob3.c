#include <stdio.h>

void num(int a){

    if(a % 3 == 0) printf("Fizz");
    if(a % 5 == 0) printf("Bazz");

}

int main () {

    int a;

    printf("ENTER NUMBER: ");
    scanf("%d",&a);

    num(a);

    printf("\n");


}