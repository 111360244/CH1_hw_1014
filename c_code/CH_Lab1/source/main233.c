#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float km, mny, dis, sum;
	int pfe, efe;
	printf("�п�J�@��Ѫ��`������:");
	scanf("%f", &km);
	printf("�п�J�@���ɨT�o�h�ֿ�:");
	scanf("%f", &mny);
	printf("�п�J�@���ɯ��p�h�֤���:");
	scanf("%f", &dis);
	printf("�@�Ѫ������O:");
	scanf("%d", &pfe);
	printf("�@�Ѫ��q��O:");
	scanf("%d", &efe);
	sum = (km / dis) * mny + pfe + efe;
	printf("�`��O:%f", sum);
	return 0;
}