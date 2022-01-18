#include <stdio.h>

int main() {

	int size;

	printf("nechta son kiritmoqchisiz => ");
	scanf("%d",&size);

	int numbers[size];
	int index = 0,massiv = 0;

	for (int i = 0; i < size; i++)
	{
		scanf("%d",&numbers[i]);
	}
	
	
	for (int i = 0; i < size; i++)
	{
		index += i;
	}

	for (int i = 0; i < size; i++)
	{
		massiv += numbers[i];
	}

	if(index > massiv)
	{
		printf("index");
	}
		if(massiv > index)
	{
		printf("values");
	}
		if(index == massiv)
	{
		printf("wow");
	}
	
	
	



return 0;
}
