#include <stdio.h>
#include <stdlib.h>

void fill(int * array, int size){

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
}

void print_array(int * array, int size) {

    for (int i = 0 ; i < size; i++)
    {
        printf("%d ",array[i]);
    }

    printf("\n");

}



int main () {

    int *array;
    int size;

    printf("Enter array size: ");
    scanf("%d",&size);

   array = (int *) malloc(size * sizeof(int));

 
    print_array(array,size);

    array = (int *) calloc(size , sizeof(int));

    print_array(array,size);

   

    return 0;
}
        
