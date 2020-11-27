#include<stdio.h>
#include<math.h>

struct Two_dimension
{
	int x;
	int y;

} TD;

int main()
{	
	struct Two_dimension p1;
	struct Two_dimension p2;
	 
	double result = 0, result2 = 0;
	
	scanf("%d %d", &p1.x, &p1.y);
	
	scanf("%d %d", &p2.x, &p2.y);
	
	result = pow(p1.x-p2.x, 2) + pow(p2.y-p1.y, 2);
	result2 = sqrt(result);
	
	printf("%lf", result2);
} 
