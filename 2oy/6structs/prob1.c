#include <stdio.h>

typedef struct Rectangle
{
    int a;
    int b;
    int c;
    int d;
} rec;


void enter(rec kor,int count);

int main () {

    rec *kor;
    int count;

    enter(*kor,count);

    return 0;
} 

void enter(rec kor,int count){

    printf("Enter x1: ");
    scanf("%d",&kor.a);

    printf("Enter x2: ");
    scanf(" %d",&kor.b);

    printf("Enter y1: ");
    scanf("  %d",&kor.c);

    printf("Enter y2: ");
    scanf("   %d",&kor.d);


}