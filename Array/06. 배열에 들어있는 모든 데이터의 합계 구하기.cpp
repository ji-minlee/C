#include <stdio.h>
int main()
{
	int numArr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};			// 크기가 10인 int형 배열 
	int sum;			// 합계를 변수로 설정 
	
	for(int index = 0; index <= 9; index++)			// 배열의 요소 개수만큼 반복 
	{
		sum += numArr[index];				// 합계 = 배열의 요소를 하나씩 더한다. 
	}
	
	printf("%d\n", sum);
	
	return 0;
}
