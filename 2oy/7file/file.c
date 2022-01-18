#include <stdio.h>
#include <stdlib.h>

void matn (char word[100]){

    printf("ENTER WORD: ");
    scanf("%s",&word);


}


int main () {

    FILE *file;
    char word[100];
    char as = 'h';



    while(as == 'h'){
        // word[0] = {'\0'};
        matn(word);
 
            file = fopen("data.txt","a");

            fscanf(file, "%s\n",word);
            fclose(file);

    printf("yana so'z kiritasizmi[h y]");
        scanf(" %c",&as);
    }

    


    return 0;
}