#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//첫번째
	char num1;
	printf("문자를 입력하시오: ");
	scanf("%c", &num1);

	printf("아스키코드: %d", num1);


	//두번째
	float num2;
	printf("면적을 제곱미터 단위로 입력하시오: ");
	scanf("%f", &num2);
	printf("%f 제곱미터는 %f평입니다.", num2, num2 / 3.3058);


	//두번 scan하니까 첫번째 scan뒤의 printf가 안됩니다 ㅠ
	return 0;
}