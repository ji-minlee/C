#include <stdio.h>
int main()
{
	int inputYear, isLeapYear;
	
	printf("원하는 년도를 입력하세요 : ");
	scanf("%d", &inputYear);
	
	/*
	윤년의 조건( 두 가지 중 하나만 만족하면 됨) 
	 - year가 4로 나누어 떨어지고, 100으로는 나누어 떨어지지 않음
	 - year가 400으로 나누어 떨어짐 
	*/
	
	if(((inputYear%4 == 0) && (inputYear%100 !=0)) || (inputYear%400 ==0))
	{
		isLeapYear = 1; 
	 } 
	switch(isLeapYear)
	{
		case 0 : 
			printf("윤년이 아닙니다.");
			break;
		case 1 :
			printf("윤년입니다.");
			break; 
	}
	
	return 0;
 } 
