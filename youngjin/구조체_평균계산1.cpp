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
		// ���⼭ �߸��� �� �����ϴ�.
		//������ �𸣰ڽ��ϴ�. 
	}	
	
	for(int i = 0; i < input; i++)
	{
		//avr[i] = (array[i].language + array[i].math + array[i].society + array[i].science) / 4;
		//�ڲ� scanf���� �̻��� ���� �������� int ���� �Ѿ�����ϴ�. 
		printf("%d %d %d %d\n", array[i].language, array[i].math, array[i].society, array[i].science);
	}
	
	for(int i = 0; i < input; i++)
	{
		final_avr += avr[i];
	}
	
	final_avr = final_avr / input;
	
	printf("��ü ��� = %d\n", final_avr);
	
	return 0;
}
