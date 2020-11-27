#include<stdio.h>

typedef struct subject {
	int language[30];
	int math[30];
	int society[30];
	int science[30];
} sub;

int main()
{
	int input, avr[30];
	int final_avr;
	
	scanf("%d", &input);
	
	struct subject array[input];
	
	for(int i = 0; i < input; i++)
	{
		scanf("%d %d %d %d", &array[i].language, &array[i].math, &array[i].society, &array[i].science);	
		// 여기서 잘못된 것 같습니다.
		//이유를 모르겠습니다. 
	}	
	
	for(int i = 0; i < input; i++)
	{
		//avr[i] = (array[i].language + array[i].math + array[i].society + array[i].science) / 4;
		//자꾸 scanf에서 이상한 값이 들어오는지 int 형을 넘어버립니다. 
		printf("%d %d %d %d\n", array[i].language, array[i].math, array[i].society, array[i].science);
	}
	
	for(int i = 0; i < input; i++)
	{
		final_avr += avr[i];
	}
	
	final_avr = final_avr / input;
	
	printf("전체 평균 = %d\n", final_avr);
	
	return 0;
}
