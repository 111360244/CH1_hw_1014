#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int square , cube ;
	printf("number    square    cube\n");
	
	for (int i = 0; i <= 10; i++)
	{
		square = (i * i);
		cube = (i * i * i);
		if (i <= 3)
		{
		printf("%d", i);
		printf("         ");
		printf("%d", square);
		printf("         ");
		printf("%d\n", cube);
		}
		else if (i > 3 && i <= 9)
		{
			printf("%d", i);
			printf("         ");
			printf("%d", square);
			printf("        ");
			printf("%d\n", cube);
		}
		else
		{
			printf("%d", i);
			printf("        ");
			printf("%d", square);
			printf("       ");
			printf("%d\n", cube);
		}
		
		
	}

}