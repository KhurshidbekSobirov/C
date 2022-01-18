#include <stdio.h>

int main () {

    int a,b,c;
    int *ptr;

    printf("enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    printf(" a = %d\n b = %d\n c = %d\n",a,b,c);

    printf("enter number: ");
    scanf("%d",ptr);

    c = *ptr;
    a = c;
    b = c;

    printf(" a = %d\n b = %d\n c = %d\n",a,b,c);



    return 0;
}