#include <stdio.h>

int main () {

    FILE *file;
    char text[1024];
 
    printf("Enter text: ");
    fgets(text,1024,stdin);

    file = fopen("output.txt","w");

    for (int i = 0; i < text[i]; i++)
    {
    
            if(text[i] == '.'){

                   fprintf(file,"\n");

            }else fprintf(file,"%c",text[i]);
    

    }

    fclose(file);


    return 0;
}