#include <stdio.h>

	int main() {

		int son[10];
        int toq[10];

        for (int i = 0; i < 10; i++)
        {
            son[i] = i + 1; 
        }


        for (int i = 0 , j = 10; i < 10; i++,j--)
        {

                       


                if(son[j] % 2 != 0){
                    
                        toq[i] = son[j];
                       
                        
                    }
               if(son[i] % 2 == 0) printf("%d ",son[i]);
                else printf("%d ",toq[i]);
        }

        
        
			

	return 0;
	}