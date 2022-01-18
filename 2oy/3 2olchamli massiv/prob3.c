#include <stdio.h>

int main() {

    int array[3][3]={{},{},{}};
    int i = 0,a = 0,b = 0;


    printf("Enter 9 array items:");
    for (; i < 3; i++){
        for (int j = 0; j < 3; j++){
        scanf("%d",&array[i][j]);
        }
    }

    for(int i = 0; i < 3;i++){
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",array[i][j]);
        } printf("\n");
    }

    printf("\n\n");

    for (int i = 0; i < 3; i++)
    {
    
        for (int j = 0; j < 3; j++){
            a = array[2][2];
            array[2][2] = array[0][0];
            array[0][0] = a;

            b = array[0][2];
            array[0][2] = array[2][0];
            array[2][0] = b;

        }
    }


    for(int i = 0; i < 3;i++){
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",array[i][j]);
        }printf("\n");
    }
    
    



    return 0;
}