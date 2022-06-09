#include <stdio.h>
int main()
{
// 산술 계산기 프로그램 1. 2개의 정수와 1개의 연산자  2. 연산자에 따른 산술연산  3. switch ~ case 	
	
	int input1, input2;
	char operation;
	
	printf("정수 연산자 정수 입력하세요\n(예: 5 (+,-,*,/) 7) : ");
	scanf("%d %c %d", &input1, &operation, &input2);
	
	switch(operation)
	{
		case '+':
			printf("%d %c %d = %d\n", input1, operation, input2, input1+input2);
			break;
		
		case '-':
			printf("%d %c %d = %d\n", input1, operation, input2, input1-input2);
			break;
		
		case '*':
			printf("%d %c %d = %d\n", input1, operation, input2, input1*input2);
			break;
			
		case '/':
			printf("%d %c %d = %d\n", input1, operation, input2, input1/input2);
			break;
			
		default :
			printf("연산자를 잘못 입력하셨습니다.");
			break;
			 
	}
	
	return 0;
 } 
