#include <stdio.h>

	int main () {

	  int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7;

	 	 printf("%d * %d = %d\n",a, a, a*a);
		 printf("%d * %d = %d\n",a,b, a*b);
         printf("%d * %d * %d = %d\n",a,b,c, a*b*c);
         printf("%d * %d * %d * %d = %d\n",a,b,c,d, a*b*c*d);
         printf("%d * %d * %d * %d * %d = %d\n",a,b,c,d,e, a*b*c*d*e);
         printf("%d * %d * %d * %d * %d * %d = %d\n",a,b,c,d,e,f, a*b*c*d*e*f);
         printf("%d * %d * %d * %d * %d * %d * %d = %d\n",a,b,c,d,e,f,g, a*b*c*d*e*f*g);

	return 0;
	}
