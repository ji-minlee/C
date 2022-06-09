#include <stdio.h>
int main()
{
	int myBirth, myYear, myMonthDay;
	int koreanAge, americanAge;
	
	printf("주민번호 앞자리 입력: ");
	scanf("%d", &myBirth);
	
	myYear = myBirth / 10000;		// 10000으로 나누면 연도가 나온다 ex) 940907 > 94
	myMonthDay = myBirth % 10000;		// 위와 같은 원리로 10000으로 나눈 나머지는 생일의 월, 일이 나온다 ex) 940907 > 0907	
	
	//2000년생을 기준으로 다르게 적용해야 한다
	//2022년(올해) 기준이므로 연도가 22보다 작으면 2000년대생으로 간주한다
	
	if(myYear > 22)
	{
		koreanAge = 2022 - (1900 + myYear) + 1;
	} 
	else {
		koreanAge = 2022 - (2000 + myYear) + 1;
	}
	
	//오늘(3월 15일) 기준으로 생일이 지나면 만 나이 +1  > 0315보다 작거나 같으면  만 나이 +1
	//만 나이 계산 : 생일이 지났으면 (-1), 안 지났으면 (-2)
	 
	if(myMonthDay <= 0315) 
	{
		americanAge = koreanAge - 1;
	}
	else 
	{
		americanAge = koreanAge - 2;
	} 
	
	printf("오늘 (2022년 3월 15일)기준 나이는 %d세, 만 나이는 %d세 입니다.\n", koreanAge, americanAge);
	
	return 0;
} 
