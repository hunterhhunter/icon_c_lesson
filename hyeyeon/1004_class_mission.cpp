#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//미션1 : 문자를 입력하시오: 에 입력하면 해당하는 아스카값 도출
	char c;
	printf("문자를 입력하시오 : ");

	scanf("%c", &c);

	printf("아스카코드 : %d\n", c);


	//미션2 : 면적을 제곱미터 단위로 입력하면 몇평인지 나오게 하는 것
	float a;
	printf("면적을 제곱미터 단위로 입력하시오 : ");
	
	scanf("%f", &a);

	float result = a / 3.3058;

	printf("%.2f제곱미터는 %.2f평입니다", a, result);

	return 0;
}