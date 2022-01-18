#include <stdio.h>


 int main () {

    FILE*file1;
    FILE*file2;
     char c;
 
    char str[100];
    file2=fopen("output.txt","w");
     file1=fopen("1.txt","w");
     fprintf(file1,"assalomu aleykum");
 
    while(!feof(file1)){
    c=fgetc(file1);
        if(c == str){
        fputc(c,file2);
        }
    }

    fclose(file1);
     fclose(file2);
     
    return 0;
 }