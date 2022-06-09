#include <stdio.h>
int main()
{
 //나이를 입력받아서 기본 요금은 2,000원이지만 경로 우대 대상자(65세 이상)이면 무료 처리	
	int age;
	int fee = 2000;
	
	printf("나이 입력 : ");
	scanf("%d", &age);
	
	if(age >= 65)
	{
		fee = 0;
	}
	
	printf("나이 : %d\n", age);
	printf("요금 : %d\n", fee);
	 
	
	return 0;
}
