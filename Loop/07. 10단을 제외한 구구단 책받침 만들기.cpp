#include <stdio.h>
int main()
{
	int index, number;
	
	for(index = 2; index < 10; index+=3)
	{
		for(number = 1; number < 10; number++)
		{
			if(index != 8)
			{
				printf("%d * %d = %d\t%d * %d = %d\t%d * %d = %d\n", index, number, index*number, index+1, number, (index+1)*number, index+2, number, (index+2)*number);
			}
			
			else if(index == 8)
			{
				printf("%d * %d = %d\t%d * %d = %d\n", index, number, index*number, index+1, number, (index+1)*number);
			}
		}	
		
		printf("\n");
	}
	return 0;
} 
