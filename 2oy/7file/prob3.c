#include <stdio.h>

int main () {

    FILE *file;
    char text[1024];
    int a = 0;
 
    printf("Enter text: ");
    fgets(text,1024,stdin);

    file = fopen("matn.txt","w");

    for (int i = 0; i < text[i]; i++)
    {

        fprintf(file,"%c",text[i]);
    
            if(text[i] == 10)  a++;
            else  fprintf(file,"%c",text[i]);
            
    

    }

    fclose(file);

    printf("LINES: %d",a);


    return 0;
}