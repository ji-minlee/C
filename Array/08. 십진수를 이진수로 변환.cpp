#include <stdio.h>
int main()
{
	int decimal = 13;				// 십진수 13을 이진수로 변환 
	int binary[20] = {0};			// 이진수 배열 초기화 
	
	int position = 0;				// 변수 position = 자릿수 
	
	while(!(decimal == 0))					// 십진수가 0이 아닌 동안은 반복한다. > 0이 되면 멈춘다. (while문) 
	{
		binary[position] = decimal % 2;		// 이진수 배열에 십진수를 2로 나눈 나머지를 배열한다.  
		decimal = decimal / 2;				// 십진수를 2로 나눈 몫을 저장 
		
		position++;							// 자릿수 변경 
	} 
	
	// 배열의 요소를 역순으로 출력 
	for(int index = position - 1; index >= 0; index--)		// 자릿수에서 1을 빼야 한다. (배열의 인덱스가 0부터 시작하기 때문) 
	{
		printf("%d", binary[index]);				
	}
	
	return 0;
} 
