#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	char c1;
	printf("문자를 입력하시오: ");
	scanf("%c", &c1);
	printf("%c\n", c1);

	return 0;
}

int solve() {
	const float con1 = 3.3058;
	float con2;
	printf("면적을 제곱미터 단위로 입력하시오: ");
	scanf("%d", &con2);
	float con3 = con2 / con1;
	printf("%d", con3);
	
}