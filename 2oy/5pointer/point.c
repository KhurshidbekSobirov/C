#include <stdio.h>

int main () {
/*
    int a = 0;
    int *p = &a;
    int **pp = &p;

    int *z = &a;
    int **zz = &z;

    **zz += 25;
    printf("a = %d: z = %d; zz = %d \n",a,*z,**zz);

    **pp += 30;

     printf("a = %d: p = %d; pp = %d  \n\n",a,*p,**pp);

    printf(" z + pp = %d ",*z + **pp);
*/

    int a,b;
    int *p = &a;
    int *z = &b;

    scanf("%d %d",&a,&b);

    printf("p = %d; z = %d\n",*p,*z);

    printf("p = %d: z = %d\n",*z,*p);

    return 0;
}