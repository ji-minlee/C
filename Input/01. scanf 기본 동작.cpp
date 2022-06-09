#include <stdio.h>
int main()
{
	int number1, number2;
	int returnData = 0;
	
	returnData = scanf("%d %d", &number1, &number2);
	
	printf("반환값 : %d", returnData);
	return 0;
}
