#include <stdio.h>
int main()
{
	int numA, numB, numC, numD, numE;
	int max, min;
	
	printf("숫자 A 입력 : ");
	scanf("%d", &numA); 
	printf("숫자 B 입력 : ");
	scanf("%d", &numB); 
	printf("숫자 C 입력 : ");
	scanf("%d", &numC); 
	printf("숫자 D 입력 : ");
	scanf("%d", &numD);
	printf("숫자 E 입력 : ");
	scanf("%d", &numE);

// max와 min을 지정해서 비교한다 
  	max = numA;
 	min = numA;

//최대값 	
 	if(numB > max) {
 		max = numB;
	}
 	if(numC > max) {
 		max = numC;
	 }
	if(numD > max){
		max = numD;
	}
	if(numE > max) {
		max = numE;
	}

//최저값	
	if(numB < min) {
 		min = numB;
	}
 	if(numC < min) {
 		min = numC;
	 }
	if(numD < min){
		min = numD;
	}
	if(numE < min) {
		min = numE;
	}

 
	printf("\n최대값은 %d 입니다\n", max);
	printf("최저값은 %d 입니다", min);
	
	return 0;
	
}
