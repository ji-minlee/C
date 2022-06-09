#include <stdio.h>

int plus(int a, int b)
{
	int result;
	result = a + b;
	return result;
}

int minus(int a, int b)
{
	int result;
	result = a - b;
	return result;
}

int multiple(int a, int b)
{
	int result;
	result = a * b;
	return result;
}

int divide(int a, int b)
{
	int result;
	result = a / b;
	return result;
}

int power(int a, int b)
{
	int result = 1;
	for(int index = 0; index < b; index++)
	{
		result *= a;
	}
	return result;
}

int main()
{
	int returnData1, returnData2, returnData3, returnData4, returnData5;
	
	
	returnData1 = plus(30,20);
	printf("%d\n", returnData1);
	
	returnData2 = minus(50,30);
	printf("%d\n", returnData2);
	
	returnData3 = multiple(2,50);
	printf("%d\n", returnData3);
	
	returnData4 = divide(8,3);
	printf("%d\n", returnData4);
	
	returnData5 = power(2,10);
	printf("%d\n", returnData5);
	
	return 0;
}
