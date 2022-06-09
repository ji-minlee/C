#include <stdio.h>
int main()
{
// do ~ while 사용해서 자연수 1 ~ 10까지의 합을 구한다 
	int index = 1;
	int sum = 0;
	
	do
	{
		sum = sum + index;
		index++;
	} while(index <= 10);
	
	printf("합계 : %d\n", sum);	
	
	return 0;
} 
