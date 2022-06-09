#include <stdio.h>
int main()
{
// 2개의 정수를 입력 받아 범위의 합을 구현 / 범위 합을 구하는 과정 출력 
	int index = 0;
	int end;	// 마지막 값을 받을 변수 
	int sum = 0;
	
	printf("2개의 정수 입력 : ");
	scanf("%d %d", &index, &end);
	
	while(index <= end)
	{ // 조건식 마지막이면 = , 그렇지 않으면 + 출력 
		if(index != end)
		{
			printf("%d + ", index);
		}
		else
		{
			printf("%d = ", index);		
		}
		sum = sum + index;
		index++;	
	}
	
	printf("%d\n", sum);
	
	
	return 0;
} 
