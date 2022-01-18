#include <stdio.h>

float calc (float a,float b,char op);

int main () {

    float a,b;
    char op;

    calc(a,b,op);


    return 0;
}

float calc(float a,float b,char op){

    printf("sonni kiriting: \n");

    scanf("%f %f",&a,&b);

    printf("matematik amalni kiriting: \n");
    scanf(" %c",&op);

    if (op == '/')printf("%.1f \n",a/b);
    if (op == '*')printf("%.1f \n",a*b);
    if (op == '-')printf("%.1f \n",a-b);
    if (op == '+')printf("%.1f \n",a+b);
    


}