#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1=0, num2=0;
	printf("�п�J�Ĥ@�Ӽ�:");
	scanf("%d", &num1);
	printf("�п�J�ĤG�Ӽ�:");
	scanf("%d", &num2);
	if (num1 % num2 == 0)
		printf("�O", num2, "������");
	else
		printf("���O", num2, "������");

	return 0;


}