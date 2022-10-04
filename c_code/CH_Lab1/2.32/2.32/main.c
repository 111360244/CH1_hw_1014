#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float weight ,height,BMI;
	{
		printf("請輸入身高(m):");
		scanf("%f", &height);
		printf("請輸入體重(kg):");
		scanf("%f", &weight);
		BMI = weight/ ( height * height);
		printf("BMI=%f\n", BMI);

		printf("BMI VALUES\n");
		printf("Underweight: less than 18.5 \n");
		printf("Normal:	     between 18.5 and 24.9 \n");
		printf("Overweight:  between 25 and 29.9\n");
		printf("Obeset:      30 or greater \n");
		return 0;


	}
}
