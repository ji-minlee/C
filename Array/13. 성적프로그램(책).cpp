#include <stdio.h>
int main()
{
	int korean[5]={0};	//배열 선언 
	int sum = 0;
	float avg = 0;
	
	for(int index = 0; index < 5; index++)
	{
		printf("[%d] 학생의 국어 점수 : ", index+1);
		scanf("%d", &korean[index]);
		
		sum = sum + korean[index];
	}
	
	avg = (float) sum / 5;		// 평균은 실수로 계산 
	
	printf("합계 :%d\n", sum);
	printf("평균 :%.2f\n", avg);
	
	return 0;
 } 
