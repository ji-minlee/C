#include <stdio.h>
int main()
{
	int number1, number2;
	char formula;
	
	scanf("%d%c%d", &number1, &formula, &number2);
	printf("첫 번째 숫자 : %d\n", number1);
	printf("수식 : %c\n", formula);
	printf("두 번재 숫자 : %d\n", number2);
	
	return 0;
}
