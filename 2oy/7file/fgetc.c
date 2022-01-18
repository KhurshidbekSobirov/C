#include <stdio.h>

int main () {

    FILE *f;

    f = fopen("main.txt","w");
    fprintf(f,"hello World");
    fclose(f);

    f = fopen("main.txt","r");

    char a;

    while (!feof(f))
    {
        
    a = fgetc(f);

    if(a >= 65 && a <= 90)
        printf("%ld\n",ftell(f));

    }

    fclose(f);
    return 0;
}