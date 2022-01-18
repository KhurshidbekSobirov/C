#include <stdio.h>

int main() {

    char word[50];
    int sana = 0;

    printf("Enter sentence: ");

    fgets(word,50,stdin);

    for (int i = 0; i < word[i]; i++)
    {
        if(word[i] >= 65 && word[i] <= 90) sana++;
    }

    printf("Word with capitals: %d\n",sana);
 


    return 0;
}