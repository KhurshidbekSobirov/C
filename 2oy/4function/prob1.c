#include <stdio.h>

void tub(int a){

    int check = 0; 

    scanf("%d",&a);

      for(int i = 2;i <= a;i++){
        if(a % i == 0) {
          check ++;
        } 
    }
printf("%d ",check);
            if(check == !0) {
           printf("%d => tub son\n",a); 
        } else printf("%d => tubson emas\n",a);
    
}


int main () {

   int a;
   
    tub(a);
    

    return 0;
}