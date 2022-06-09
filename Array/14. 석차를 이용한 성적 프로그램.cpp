#include <stdio.h>
int main()
{
	int korean[5];	//배열 선언 
	int rank[5]={1,1,1,1,1};	//모든 학생의 석차를 1로 초기화 
	int sum = 0;
	float avg = 0;
	
	for(int index = 0; index < 5; index++)
	{
		printf("[%d] 학생의 국어 점수 : ", index+1);
		scanf("%d", &korean[index]);
		
		
		
		sum = sum + korean[index];
	}
	
	avg = (float) sum / 5;		// 평균은 실수로 계산 
	
	for(int index = 0; index < 5; index++)			// 점수를 비교해 점수가 작으면 rank +1 
	{
		for(int index2 = 0; index2 < 5; index2++)
		{
			if(korean[index] < korean[index2])
			{
				rank[index]++;		//rank[index] = rank[index]+1 
			}
		}
	}
	
	printf("\n번호\t점수\t등수\n");
	printf("--------------------------------------------\n");
	for(int index = 0; index < 5; index++)
	{
		printf("%d\t%d\t%d\n\n", index+1, korean[index], rank[index]);
	}
	
	printf("합계 :%d\n", sum);
	printf("평균 :%.2f\n", avg);
	
	return 0;
 } 
