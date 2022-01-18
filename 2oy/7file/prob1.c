#include <stdio.h>

int main () {

    FILE *file;

    file = fopen("karra.txt","a");

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            fprintf(file,"%3d ",i*j);
        }

        fprintf(file,"\n");
        
    }
    



    return 0;
}