#include <stdio.h>

int main() {

	char ism[50];

	fgets(ism,50,stdin);

	int a = 0;
	for(;ism[a] != 10; a++){


	char c = ism[0];
    ism[0] = ism[-1];
    ism[a-1] = c;

	printf("%c", ism[a]);
	}

return 0;
}
