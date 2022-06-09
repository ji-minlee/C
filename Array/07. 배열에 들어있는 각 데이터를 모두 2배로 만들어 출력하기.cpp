#include <stdio.h>
int main()
{
	int numArr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};		//크기가 10인 int형 배열 
	
	for(int index = 0; index <= 9; index++)			// 배열의 요소 개수만큼 반복 
	{	
		numArr[index] *= 2;							// 배열의 요소를 2배로 만든다 
	}
	
	for(int index = 0; index <= 9; index++)			// 배열의 요소 개수만큼 반복 
	{
		printf("%d\n", numArr[index]);				// 2배로 만든 배열의 요소를 출력한다. 
	}
	
	return 0;
} 
