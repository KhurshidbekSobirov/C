#include <stdlib.h>
#include <stdio.h>
#include <string.h>



void fill(int * array, int size){

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
}

void print_array(int * array, int size) {

    for (int i = 0 ; i < size; i++)
    {
        printf("%d",array[i]);
    }


    printf("\n");

}



int main () {

    int *array;
    int size;

    printf("Enter array size: ");
    scanf("%d",&size);

   

   

    array = (int *) calloc(size , sizeof(int));

 
     fill(array,size);
     int a;
    

    array = realloc(array,(size + 5) * sizeof(int));

   print_array(array,size);

    printf("son kiriting\n");
    scanf("%d",&a);

    if(a > size){

     
        size -= a;
        
        array = realloc(array, (a + size) * sizeof(int));

           for (; a > size; size++)
        {
            scanf("%c",&array[a]);
        }


        
        print_array(array,size);

    }else {

               array = realloc(array, (a - size) * sizeof(int));

                 printf("qolgan harflar: ");
               for (; a > size; size++)
               {
                   printf(" %c",array[a]);
               }
               
    }


    return 0;
}