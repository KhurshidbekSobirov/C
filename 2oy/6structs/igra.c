#include <stdio.h>
#include <stdlib.h>

    typedef struct igra_sozlar{
    
        char word[10];
        char word2[10];
        char word3[10];
        char word4[10];
        char word5[10];
        char word6[10];
        char word7[10];
        char word8[10];
    } igra;

int main () {


    char tahmin[10];

   
    for (int i = 0; i < 8; i++)
    {
        fgets(tahmin,10,stdin);

        if (tahmin == igra.word || tahmin == igra.word1)
        {
            printf("qoyil endi %dchi sozni toping: ",i);
        }
        
    }
    





    return 0;
}