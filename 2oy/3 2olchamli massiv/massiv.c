#include <stdio.h>

int main () {


//teskari chop etish

/*   
    int a[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    for (int i = 2; i >= 0; i--)
    {
        for (int j = 2; j >= 0; j--)
        {
            printf("%d ",a[i][j]);
        }
        
    }
 */   

//karra jadvali

/*    int a[10][10] = {{},{},};

    for (int i = 0; i < 10; i++)

    {
        int j;
        for (j = 0; j < 10; j++)
        {
            a[i][j] = (i+1) * (j + 1);
            printf("%3d ", a[i][j]);
        }
    
        printf("\n");
    }
*/

//berilgan qatorni teskari

   int a[10][10];
   int b;
   scanf("%d",&b);

    for (int i = 0; i < 10; i++)

    {
        
            if(i == b){
                for (int j = 10; j >= 0; j--){
                        a[i][j] = (i+1) * (j + 1);
                    printf("%3d ",a[i][j]);
                }
            }else {
                for (int j = 1; j < 10; j++)
        {
            a[i][j] = (i+1) * (j + 1); 
                printf("%3d ",a[i][j]);             
            }
        }
    
        printf("\n");
    }
    
    return 0;
}