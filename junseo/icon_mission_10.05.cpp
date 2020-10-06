#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//첫번째 미션
	int A,B;
	

		scanf("%d %d", &A, &B);
	
		if (A >= 1 and A <= 10000 and B >= 1 and B <= 10000)
		{
			printf("%d\n%d\n%d\n%d\n%d\n", A + B, A - B, A * B, A / B, A % B);
		}
		
		return 0;
}

int main2()
{
	//두번째 미션

	int A, B, C;


	scanf("%d %d %d", &A, &B, &C);

	if (A >= 2 and A <= 10000 and B >= 2 and B <= 10000 and C >= 2 and C <= 10000)
	{
		printf("%d\n%d\n%d\n%d\n", (A + B) % C, ((A % C) + (B % C)) % C, (A*B) % C, ((A % C) *(B % C)) % C);
	}

	return 0;
}

int main3()
{
	//세번째 미션
	int f_number, s_number;
	int a=0, b=0, c=0;

	scanf("%d %d", &f_number, &s_number);

	if (f_number >= 100 and f_number <= 999 and s_number >= 100 and s_number <= 999)
	{
		a=(s_number / 100);
		b=(s_number % 100)/10;
		c=(s_number % 100)%10;
		
		printf("%d\n %d\n %d\n %d\n", f_number*c,f_number*b,f_number*a,f_number*s_number);
	}

	return 0;
}