#include <stdio.h>
int main()
{
	int inputYear, isLeapYear;
	
	printf("원하는 연도를 입력하세요 : ");
	scanf("%d", &inputYear);
	printf("%d년은 다음과 같습니다\n", inputYear);
	 
	if(((inputYear%4 == 0) && (inputYear%100 !=0)) || (inputYear%400 ==0))
	{
		isLeapYear = 1; 
	 } 
	
	printf("1월 : 31일\n");
	
	switch(isLeapYear)
	{
		case 0 : 
			printf("2월 : 28일\n");
			break;
		case 1 :
			printf("2월 : 29일\n");
			break; 
	}
	
	printf("3월 : 31일\n");
	printf("4월 : 30일\n");
	printf("5월 : 31일\n");
	printf("6월 : 30일\n");
	printf("7월 : 31일\n");
	printf("8월 : 31일\n");
	printf("9월 : 30일\n");
	printf("10월 : 31일\n");
	printf("11월 : 30일\n");
	printf("12월 : 31일\n");
	
	return 0;
 } 
