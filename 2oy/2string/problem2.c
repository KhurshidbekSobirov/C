#include <stdio.h>

int main () {

char word[20];

printf("enter word: ");

scanf("%s",&word);

int a = 0;
for(int i = 0; i < word[i];i++){

    a = word[i];
    if(a >= 65 && a <= 90){
        word[i] += 32; 
        printf("%c",word[i]);
    }else if (a >= 97 && a <= 122){ 
        word[i] -= 32;
        printf("%c",word[i]);
    }

}

printf("\n");

    return 0;
}