#include <stdio.h>

int main(){

    char word[50];

    printf("Enter sentences: ");
    fgets(word,50,stdin);

    int size;

    for(size = 0;word[size] != 10; size++);
  
    for (int b = size; b >= 0; b--){
        if(word[b] == 32){
            for (int i = b; i < size; i++){
                printf("%c", word[i]);
                if (word[i + 1] == ' ' ) {
                    break;       
                }
            }
        }
    }   
    printf(" ");
for (int i = 0; i < 10; i++){
    if (word[i] == 32){
        break;
    }
    printf("%c", word[i]);
}printf("\n");


    return 0;
}