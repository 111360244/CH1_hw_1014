#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float weight ,height,BMI;
	{
		printf("�п�J����(m):");
		scanf("%f", &height);
		printf("�п�J�魫(kg):");
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
