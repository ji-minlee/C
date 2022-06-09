#include <stdio.h>
int main()
{
	char affiliation[20];		/*문자 여러 개가 결합하는 문장을 입력 받기 위해서는
								char를 선언할 때 문자 개수 이상의 배열을 선언하거나 char affiliation과 같이 포인터로 선언해야 한다.*/ 
	
	scanf("%s", affiliation);	// 배열 변수에서 특정 index를 지정하지 않고 변수명만 사용시 주소 값에 해당하기 때문에 &를 붙이지 않는다. 
	printf("소속 : %s\n", affiliation);		//문장을 출력하기 위해서 %s를 사용 
	
	return 0;
}
