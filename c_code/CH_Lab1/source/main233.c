#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float km, mny, dis, sum;
	int pfe, efe;
	printf("請輸入一整天的總公里數:");
	scanf("%f", &km);
	printf("請輸入一公升汽油多少錢:");
	scanf("%f", &mny);
	printf("請輸入一公升能行駛多少公里:");
	scanf("%f", &dis);
	printf("一天的停車費:");
	scanf("%d", &pfe);
	printf("一天的通行費:");
	scanf("%d", &efe);
	sum = (km / dis) * mny + pfe + efe;
	printf("總花費:%f", sum);
	return 0;
}