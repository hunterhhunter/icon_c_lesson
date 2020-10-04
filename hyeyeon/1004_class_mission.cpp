#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c1;
	printf("문자를 입력하시오: ");
	scanf("%c", &c1);

	printf("%d \n", c1);

	float c2;
	printf("면적을 제곱미터 단위로 입력하시오: ");
	scanf("%f", &c2);

	float result = c2 / 3.3058;

	printf("%.2f제곱미터는 %.2f평입니다.", c2, result);

	return 0;
}