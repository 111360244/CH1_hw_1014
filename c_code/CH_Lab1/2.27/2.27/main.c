#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 4 - i; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i * 2; k++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;

}