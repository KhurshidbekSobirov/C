#include <stdio.h>

int main() {

	char word[50];
	int a = 0;

	printf("enter sentence: ");

	fgets(word,50,stdin);

	for (int i = 0; i < word[i]; i++)
	{
		if(word[i] == ' ') a++;
	}

	printf("siz kiritgan sozda %d probel bor\n",a);
	
	





return 0;
}
