#include <stdio.h>

int main() 
{  // 학생은 최대 20, 과목은 최대 10개라고 가정 
	int score[21][10] = {0};			// score[학생번호][과목번호] > 모든 점수 저장 
	int sum[21] = {0};					// sum[학생번호] > 학생번호별 과목 총점 
	int avg[21] = {0};					// avg[학생번호] > 학생번호별 과목 평균 
	int subjectSum[10] = {0};			// subjectsum[과목번호] > 과목별 총합 
	float subjectAvg[10]; 				// subjectAvg[과목번호] > 과목별 평균 
	
	int studentCount = 0;				// 학생 수 
	int subjectCount = 0;				// 과목 수  
	
	printf("학생 수 입력 : ");
	scanf("%d", &studentCount);
	
	printf("과목 수 입력 : ");
	scanf("%d", &subjectCount);
	
	for(int index = 0; index <studentCount; index++) 		// 학생 번호  
	{
		printf("Koposw%d 학생의 점수 %d개를 차례대로 입력하세요: ", index, subjectCount);
		for(int index2 = 0; index2 < subjectCount; index2++)  	// 과목 번호  
		{
			scanf("%d", &score[index][index2]);				// 학생 번호에 따른 과목점수를 배열로 받는다. 
		}
		
	}
	for(int index = 0; index <studentCount; index++) 		// 학생 번호 
	{
		int sum = 0;					
		float avg = 0;			// 평균은 실수로 지정 
		for(int index2 = 0; index2 < subjectCount; index2++) 	// 과목 번호 
		{
			sum += score[index][index2];					// 학생번호별 과목 총점 
			subjectSum[index2] += score[index][index2];		// 과목별 총합 
		}
		
		avg = sum / (float)subjectCount;					// 학생번호별 과목 평균  // 값을 실수로 구하기 위해 subjectCount를 실수로 지정 
		printf("Koposw%d 학생의 총점 %d, 평균 %5.2f\n", index, sum, avg);
	}
	for(int index = 0; index < subjectCount; index++) 
	{
		subjectAvg[index] = subjectSum[index] / (float)studentCount;		// 과목별 평균 // 값을 실수로 구하기 위해 studentCount를 실수로 지정 
		printf("과목%d 평균 %5.2f\n", index, subjectAvg[index]);
	}
	return 0;
}
