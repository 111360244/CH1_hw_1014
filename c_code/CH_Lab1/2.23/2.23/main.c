#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1 = 0, num2 = 0, num3 = 0;
	printf("�п�J�Ĥ@�Ӿ�ƼƦr:");
	scanf("%d", &num1);
	printf("�п�J�ĤG�Ӿ�ƼƦr:");
	scanf("%d", &num2);
	printf("�п�J�ĤT�Ӿ�ƼƦr:");
	scanf("%d", &num3);

	if (num1 > num2 && num1 > num3)
	{
		if (num2 >= num3)
		{
			printf("�̤j���:%d", num1);
			printf("�̤p���:%d\n:", num3);
		}
		else
		{
			printf("�̤j���:%d:", num1);
			printf("�̤p���:%d\n", num2);
		}
	}
	else if (num2 > num1 && num2 > num3)
	{
		if (num1 >= num3)
		{
			printf("�̤j���:%d", num2);
			printf("�̤p���:%d\n", num3);
		}
		else
		{
			printf("�̤j���%d:", num2);
			printf("�̤p���%d:\n", num1);
		}
	}
	else if (num3 > num1 && num3 > num2)
	{
		if (num1 >= num2)
		{
			printf("�̤j���:%d", num3);
			printf("�̤p���:%d\n", num2);
		}
		else
		{
			printf("�̤j���%d:", num3);
			printf("�̤p���%d:\n", num1);
		}
	}
	return 0;
}