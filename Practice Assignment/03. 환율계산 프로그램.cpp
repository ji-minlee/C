#include <stdio.h>

int main()
{
	int won, type, resultChange, returnMoney;
	float originalChange, changeMoneyRate;
	
	// 환율 상수 > 고정값으로 활용 
	const float RATE_USD = 1232.20;
	const float RATE_JPY = 1059.18;
	const float RATE_EUR = 1355.36;
	const float RATE_CNY = 194.69;
	const float RATE_GBP = 1612.76;

	printf("환전을 원하는 금액을 입력하세요(원화) : ");
	scanf("%d", &won);

	printf("환전할 외화를 선택하세요 (1:USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP) : ");
	scanf("%d", &type);
	
	if(type == 1)
	{
		changeMoneyRate = RATE_USD;	
	}
	
	
	else if(type == 2)
	{
		changeMoneyRate = RATE_JPY;
	}
	
	
	else if(type == 3)
	{
		changeMoneyRate = RATE_EUR;
	}
	
	
	else if(type == 4)
	{
		changeMoneyRate = RATE_CNY;		
	}
	
	
	else if(type == 5)
	{
		changeMoneyRate = RATE_GBP;
	}
	
	
	else
	{
		printf("잘못된 입력입니다");
		changeMoneyRate = 0; 
	}
	
	
	if (changeMoneyRate !=0)
	{
		originalChange = won / changeMoneyRate;		// originalChange는 실수로 정의 
		resultChange = originalChange;				// resultChange는 정수로 정의 
		returnMoney = (originalChange- resultChange)*changeMoneyRate;	// returnMoney를 계산하기 위해 소수 부분을 원화로 계산 
		printf("환전 : %d\n", resultChange); 		// 정수로 된 부분만 환전 
		printf("거스름돈 : %d 원\n", (returnMoney / 10) *10);	// 1원 부분 절삭 (10으로 나누면 1원 부분 사라짐> 다시 10을 곱해 10원 단위로) 
	}
	
	return 0;
}
