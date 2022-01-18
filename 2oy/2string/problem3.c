#include <stdio.h>

int main () {

char word[50], a,b;

printf("Enter sentence: ");

fgets(word,50,stdin);

printf("What to change? ");

scanf("%c",&b);

printf("Target: ");

scanf(" %c",&a);


for (int i = 0; i < word[i]; i++)
{
    if(word[i] == b){ 
        word[i] = a;
    }
    printf("%c",word[i]);
}




    return 0;
}
