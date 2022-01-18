#include <stdio.h>

int main () {

//toq indexlarni chqarish

/*    printf("nechta son kiritmoqchisiz ");
    int size;
    scanf("%d",&size);

    int numbers[size];

for (int i = 0; i < size; i++)
{
    scanf("%d",&numbers[i]);
}

for (int j = 0; j < size; j++)
{
    if(j % 2 != 0){
        printf("%d ",numbers[j]);
    }
}
*/

//arrayni yarmidan sanash

/*
int size;
scanf("%d",&size);


int numbers[size];

int i = 0;
for (; i < size; i++)
{
    scanf("%d",&numbers[i]);
}

for (int  j = int / 2; j < size;j++)
{
    printf("%d \n",numbers[j]);
}
*/

   printf("nechta son kiritmoqchisiz ");
    int size;
    scanf("%d",&size);

    int numbers[size];
    int juft[size / 2];
    int toq[size / 2];

    int i = 0;
    for (; i < size; i++)
    {
        scanf("%d",&numbers[i]);
    }
    
    int b = 0, j = 0;
    for(; i < numbers[size];i++){

     if(i % 2 != 0){
       juft[b] = numbers[i];
       b++;  
     }else if(i % 2 == 0){
        toq[j] = numbers[i];
        j++;
     }
    }

    for (int i = 0 ,b = 5; i < 5; i++,b++)
    {
        printf("%d ",juft[b]);
        printf("%d ",toq[j]);
        i++;
    }
    
     
     





    return 0;
}