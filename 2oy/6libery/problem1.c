#include <stdio.h>
#include <string.h>

int main () {

    char word[500] = {},a[100],b[100],c[100],d[100],e[100];

    printf("Enter word: ");
    scanf("%s %s %s %s %s",&a,&b,&c,&d,&e);


            strcat(word,a);
            strcat(word," ");


            strcat(word,b);
            strcat(word," ");

            strcat(word,c);
            strcat(word," ");


            strcat(word,d);
            strcat(word," ");


            strcat(word,e);
            strcat(word," ");

    

    printf("%s\n",word);




    return 0;
}