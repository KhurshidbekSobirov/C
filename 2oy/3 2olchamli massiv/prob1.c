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

    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);

    for (int i = 0; i < 3; i++)
    {
    
        for (int j = 0; j < 9; j++){
            if(array[i][j] == a){
                array[i][j] = b;
            }else if (array[i][j] == b){
                array[i][j] = a;
            }

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