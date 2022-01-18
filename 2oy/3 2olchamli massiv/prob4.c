#include <stdio.h>


int main () {

    int array[5][5];
    int son = 0,a = 0; 

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j] = a;        
            a++;   
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%2d ",array[i][j]);
        }printf("\n");
        
    }


    printf("Enter number: ");
    scanf("%d",&son);

    int right = 0,left = 0 ,up = 0,down = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

                
                
          
                if (array [i][j] == son - 5)
                {
                        up = son - 5;
                } 

                if (array [i][j] == son + 5)
                {
                    down = son + 5;
                }
                if (array [i][j] == (son - 1))
                {
                    left = son - 1;
                }
                if (array [i][j] == son + 1)
                {
                   
                   right = son + 1;
                }

                if (array[i][0] == son)
                {
                    left = 0;
                }
    
                if (array[i][4] == son)
                {
                    right = 0;
                }
            
            
        }
        
    }

     printf("%d ",right);
     printf("%d ",left);
    

            if(up > 0){
                printf("UP: %d ,",up);
            }else printf("UP: - ,");

            if(down > 0){
                printf("DOWN: %d ,",down);
            }else printf("DOWN: - ,");

            if(left > 0){
                printf("LEFT: %d ,",left);
            }else printf("LEFT: - ,");

            if(right > 0 ){
                printf("RIGHT: %d ,",right);
            }else printf("RIGHT: - ,");


        printf("\n");




    return 0;
}