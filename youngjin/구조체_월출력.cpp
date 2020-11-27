#include<stdio.h>


typedef enum _Month
{
	Jan = 1,
	Feb,
	Mar,
	Apr,
	May,
	Jun,
	Jul,
	Aug,
	Sep,
	Oct,
	Nov,
	Dec,
	MonthCount
} Month;

int main()
{
	for(Month i = Jan; i < MonthCount; i++)
	//뭐가 잘못된지 모르겠습니다. 
		printf("%d\n", i);
		
	return 0;
}
