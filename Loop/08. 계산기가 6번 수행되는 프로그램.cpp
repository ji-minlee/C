#include <stdio.h>
int main()
{
	int number1, number2, result;
	int index;
	char formula;
	
	for(index=0; index<6;index++)
	{
	
		printf("수식을 입력하세요 : ", index);
		scanf("%d%c%d", &number1, &formula, &number2);
	
		if(formula == '+'){
			result = number1 + number2;
		}
		else if(formula == '-'){
			result = number1 - number2;
		}
		else if(formula == '*'){
			result = number1 * number2;
		}
		else if(formula == '/'){
			result = number1 / number2;
		}
		else if(formula == '%'){
			result = number1 % number2;
		}
		else if(formula == '^')
		{	result=1;						// 초기값을 1 : 0을 넣으면 무조건 0이 나온다 
			for(int i =0; i<number2; i++)	// i를 number2까지 반복 
			{
				result *= number1;			// 제곱한다 
			}
		}
	
		printf("%d %c %d = %d 입니다.\n\n", number1, formula, number2, result);
	}
	

	  
	return 0;	

	
}


