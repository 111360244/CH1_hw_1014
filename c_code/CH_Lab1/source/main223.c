#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1 = 0, num2 = 0, num3 = 0;
	printf("叫块材俱计计:");
	scanf("%d", &num1);
	printf("叫块材俱计计:");
	scanf("%d", &num2);
	printf("叫块材俱计计:");
	scanf("%d", &num3);

	if (num1 > num2 && num1 > num3)
	{
		if (num2 >= num3)
		{
			printf("程俱计:%d", num1);
			printf("程俱计:%d\n:", num3);
		}
		else
		{
			printf("程俱计:%d:", num1);
			printf("程俱计:%d\n", num2);
		}
	}
	else if (num2 > num1 && num2 > num3)
	{
		if (num1 >= num3)
		{
			printf("程俱计:%d", num2);
			printf("程俱计:%d\n", num3);
		}
		else
		{
			printf("程俱计%d:", num2);
			printf("程俱计%d:\n", num1);
		}
	}
	else if (num3 > num1 && num3 > num2)
	{
		if (num1 >= num2)
		{
			printf("程俱计:%d", num3);
			printf("程俱计:%d\n", num2);
		}
		else
		{
			printf("程俱计%d:", num3);
			printf("程俱计%d:\n", num1);
		}
	}
	return 0;
}