#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1=0, num2=0;
	printf("請輸入第一個數:");
	scanf("%d", &num1);
	printf("請輸入第二個數:");
	scanf("%d", &num2);
	if (num1 % num2 == 0)
		printf("是", num2, "的倍數");
	else
		printf("不是", num2, "的倍數");

	return 0;


}