#include <stdio.h>

int main () {
    
    int a = 0,b = 0, c = 0;

    FILE *file;

    FILE *file2;

    FILE *file3;

    char word[20];
    char word2[20];
    char word3[20];

    printf("Enter word: ");
    fgets(word,20,stdin);

    printf("Enter word2 : ");
    fgets(word2,20,stdin);

    printf("Enter word3: ");
    fgets(word3,20,stdin);

    //one file

    file = fopen("1.txt","w");

    fprintf(file,"%s",word);

    fclose(file);

    //two file

    file2 = fopen("2.txt","w");

    fprintf(file2,"%s",word2);

    fclose(file2);

    //thre file 

    file3 = fopen("3.txt","w");

    fprintf(file3,"%s",word3);

    fclose(file3);

    for (int i = 0; i < word[i]; i++)
    {
        a++;
    }

    for (int i = 0; i < word2[i]; i++)
    {
        b++;
    }

    for (int i = 0; i < word3[i]; i++)
    {
        c++;
    }
    



    if(word[0] >= 65 && word[0] <= 90){

        if(word2[b - 1] >= 33 && word2[b - 1] <= 63){
            printf(" %s %s %s ",word,word3,word2);
        }else printf(" %s %s %s ",word,word2,word3);

    }else if(word2[0] >= 65 && word2[0] <= 90){
            if(word3[c - 1] >= 33 && word3[c - 1] <= 63){
                printf(" %s %s %s ",word2,word,word3);
            }else printf(" %s %s %s ",word2,word3,word);

    }else if(word3[0] >= 65 && word3[0] <= 90){
            if(word2[b - 1] >= 33 && word2[b - 1] <= 63){
                printf(" %s %s %s ",word3,word,word2);
            }else printf(" %s %s %s ",word3,word2,word);
    

    }

    printf("\n");



    return 0;
}