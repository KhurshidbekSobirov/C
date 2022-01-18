#include <stdio.h>

int tub(int a,int b){

    printf("istalgan son kiriting\n");
    scanf("%d %d",&a,&b);
    int tub_s = 0, son = 0;
  
        
        for(int i = 0; a < b; i++){
            
            if(a % i == 0){
                tub_s = 1;
                break;
            }
        }
        if(tub_s == 0 && b != 1){ 
            printf("%d ", b);
            son++;
        }
    
    printf("--");
    printf(" %d prime numbers\n", son);
    return 0;
}
    



int main () {

   int a,b;
   
    tub(a,b);
    

    return 0;
}