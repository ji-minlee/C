#include <stdio.h>
int main()
{
	int index = 1;
	int sum = 0;
	
	while(index <= 10)
	{
		sum += index;
		index++;
	}
	
	printf("합계 : %d\n", sum);
	
	return 0;
}
