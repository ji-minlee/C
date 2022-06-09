#include <stdio.h>
int main()
{
	//file에 내용이 없을 때
	 
	int inputData = 0;
	int resultData;
	
	FILE * fp;
	fp = fopen("input.txt", "r");				//"r" : 읽기 모드 
	resultData = fscanf(fp, "%d", &inputData);	/*fscanf를 통해 fp에서 지정한 파일에서 정수 값 하나를 받아서 inputData 변수에 저장 
													fscanf 동작 수행 결과는 resultData에 저장*/ 
	printf("결과 : %d\n", resultData);			// 아무 값이 없을 때는 오류의 의미로 -1이 출력된다 
	printf("입력 값 : %d\n", inputData);		//실제 값으로 받아온 것이 없어 초깃값 0이 출력된다 
	fclose(fp);
	
	return 0;
}
