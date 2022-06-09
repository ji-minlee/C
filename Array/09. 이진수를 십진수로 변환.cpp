#include <stdio.h>
int main()
{
	int decimal = 0;
	int binary[4] = {1,1,0,1};
	int index, square = 1, sum = 0;
	
	for(index = 3; index >= 0; index--)
	{
		
		sum += binary[index] * square;		 
		square *= 2;						// square = 각 자리에 곱해줄 2의 n승 
	}
	
	printf("%d\n", sum);
	
	return 0;
}
