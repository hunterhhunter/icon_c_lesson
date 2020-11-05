#include<stdio.h>

int main()
{
	char *a;
	char c;
	float *b;
	float d;
	
	scanf("%c", &c);
	scanf("%lf", &d);
	
	a = &c;
	b = &d;
	
	printf("%u\n", &c);
	printf("%u\n", &d);
	
	return 0;
}
