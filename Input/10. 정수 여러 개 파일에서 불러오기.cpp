#include <stdio.h>
int main()
{	
//file :  10 20 30 40 50 60 70 80 90 100  
	int inputData = 0;
	int resultData;
	
	FILE * fp;
	fp = fopen("input.txt", "r");
	printf("입력 값 : ");
	while(fscanf(fp, "%d", &inputData) !=-1)		/*while문을 사용해 fscanf의 값이 -1이 아닐 때까지 반복한다(더이상 데이터가 없을 때 까지)*/
	{
		printf("%d ", inputData);		//%d 뒤에 한칸을 띄워줘야 가독성이 좋다 
	}
	fclose(fp); 
	
	return 0;
}
