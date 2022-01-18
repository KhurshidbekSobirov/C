#include <stdio.h>

int main() {

	int aa;

	scanf("%d",&aa);

	int son[aa];

	for(int i=0; i < aa; i++){

		scanf("%d",&son[i]);

	}

	for(int i = 0; i < aa;i++){

		printf(" %d",son[i]);

	}



return 0;
}
