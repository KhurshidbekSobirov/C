#include <stdio.h>

int main() {

    int array[3][3]={{},{},{}};
    int i = 0;


    printf("Enter 9 array items:");
    for (; i < 3; i++){
        for (int j = 0; j < 3; j++){
        scanf("%d",&array[i][j]);
        }
    }

    int max = array[0][0];
    int min = array[0][0];

    for (int i = 0; i < 3; i++)
    {
    
        for (int j = 0; j < 3; j++){
            if(array[i][j] > max){
                max = array[i][j];
            }else if (array[i][j] < min){
                min = array[i][j];
            }

        }
    }

    printf("max: %d\nmin: %d\n",max,min);


    for(int i = 0; i < 3;i++){
        for (int j = 0; j < 3; j++)
        {
            if(array[i][j] == max) {
                array[i][j] = min;
            }else if(array[i][j] == min){ 
                array[i][j] = max;
            }
            printf("%d ",array[i][j]);
        }printf("\n");
    }
    
    



    return 0;
}