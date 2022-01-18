#include <stdio.h>
#include <string.h>

int main () {

    char word[50];
    char word_a[50];
    int a = 0,b = 0;
    int sana = 0;

    printf("Enter word: ");
    scanf("%s",&word);

    printf("Enter word: ");
    scanf("%s",&word_a);


    if(strcmp(word,word_a) == 0){
        printf("EQUAL FULLY\n");
    }else if(strlen(word) == strlen(word_a)){
        printf("EQUAL LENGTH\n");
    }else {
        printf("NOT EQUAL\n");
    }





    return 0;
}