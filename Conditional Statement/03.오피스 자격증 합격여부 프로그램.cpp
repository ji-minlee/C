#include <stdio.h>
int main()
{ 
// 세 과목 평균이 60점 이상이면 합격, 아니면 불합격
 
	int excel, powerpoint, word;
	int sum;
	float avg;			// 평균 실수로 지정 
	
	printf("엑셀, 파워포인트, 워드 : ");
	scanf("%d %d %d", &excel, &powerpoint, &word);
	
	sum = excel + powerpoint + word;
	avg = sum / (float)3;
	
	printf("합계 : %d\n", sum);
	printf("평균 : %.2f\n", avg);		// 실수로 소수점 두 자리까지 출력 
	 
	if(avg >= 60)
	{
		printf("합격");
	}
	else
	{
		printf("불합격");
	}
	
	return 0;
}
