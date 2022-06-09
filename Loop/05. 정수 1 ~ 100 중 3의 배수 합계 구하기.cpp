#include <stdio.h>
int main()
{
	int sum = 0;
	int index;
	
	for(index = 1; index <= 100; index++)
	{
		if(index % 3 == 0)	//3의 배수  
		{
			printf("%d ", index);
			sum = sum + index;
		}
	}
	
	printf("\n1 ~ 100의 정수 중 3의 배수의 합 : %d\n", sum);
	
	return 0;
}
