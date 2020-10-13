#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	// 1번 과제
	int A, B;
	
	while (A != 0 || B != 0)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}

	return 0;
}

int solve2()
{
	// 2번 과제
	int N;
	scanf("%d", &N);
	for (int index = 1; index <= 9; index++)
	{
		printf("%d * %d = %d\n", N, index, N * index);
	}

	return 0;
}

int solve3()
{
	// 3번 과제
	int x, y;
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
	{
		printf("1");
	}
	else if (x < 0 && y>0)
	{
		printf("2");
	}
	else if (x < 0 && y < 0)
	{
		printf("3");
	}
	else
	{
		printf("4");
	}

	return 0;
}

int solve4()
{
	// 4번 과제
	int N, space, star, count;
	scanf("%d", &N);

	count=1;

	while (N != 0)
	{
		for (space = N - 1; space >= 0; space--)
		{
			printf(" ");
		}
		for (star = 1; star <= count; star++)
		{
			printf("*");
		}
		printf("\n");
		N--;
		count++;
	}

	return 0;
}

int solve5()
{
	// 5번과제
	int H, M, newM;
	scanf("%d %d", &H, &M);
	newM = 60 - (45-M);
	if (H == 0 && M < 45)
	{
		printf("23 %2d", newM);
	}
	else
	{
		if (M >= 45)
		{
			printf("%2d %2d", H, M - 45);
		}
		else
		{
			printf("%2d %2d", H - 1, newM);
		}
	}

	return 0;
}