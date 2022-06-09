#include <stdio.h>
int main()
{
	int number;
	
	printf("정수 입력 : ");
	scanf("%d", &number);
	
	if(number % 2 == 0)
	{
		printf("짝수");
	}
	else
	{
		printf("홀수");
	}
	
	return 0;
}
