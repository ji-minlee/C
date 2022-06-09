#include <stdio.h>
int main()
{
// 세 과목 평균이 60점 이상이면 합격, 아니면 불합격, 한 과목이라도 40점 미만의 과락이 있으면 불합격

	int excel, powerpoint, word;
	int sum;
	float avg;
	
	printf("엑셀, 파워포인트, 워드 : ");
	scanf("%d %d %d", &excel, &powerpoint, &word);
	
	sum = excel + powerpoint + word;
	avg = sum / 3;
	
	printf("합계 : %d\n", sum);
	printf("평균 : %.2f\n", avg);
	
	if(avg >= 60 && excel >= 40 && powerpoint >= 40 && word >= 40)		// 과락 조건 추가 
	{
		printf("합격");
	}
	else
	{
		printf("불합격");
	}
	 
	
	return 0;
}
