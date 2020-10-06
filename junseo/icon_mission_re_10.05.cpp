#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//첫번째 미션
	int A,B;
	

		scanf("%d %d", &A, &B);
	
		
		printf("%d\n%d\n%d\n%d\n%d\n", A + B, A - B, A * B, A / B, A % B);
		
		
		return 0;
}

int solve()
{
	//두번째 미션

	int A, B, C;


	scanf("%d %d %d", &A, &B, &C);

	
	printf("%d\n%d\n%d\n%d\n", (A + B) % C, ((A % C) + (B % C)) % C, (A*B) % C, ((A % C) *(B % C)) % C);
	

	return 0;
}

int solve2()
{
	//세번째 미션
	int f_number, s_number;
	int a=0, b=0, c=0;

	scanf("%d %d", &f_number, &s_number);

	
	a=(s_number / 100);
	b=(s_number % 100)/10;
	c=(s_number % 100)%10;
		
	printf("%d\n %d\n %d\n %d\n", f_number*c,f_number*b,f_number*a,f_number*s_number);
	

	return 0;
}