#include <stdio.h>
int main()
{
 //file : 90,100,80 // 60,30,50 // 100,100,100
 
 	int linuxScore, javaScore, cScore;
	
	FILE * fp;
	fp = fopen("input.txt","r");
	printf("리눅스\t자바\tC언어\n");
	while(fscanf(fp, "%d,%d,%d", &linuxScore, &javaScore, &cScore) != -1)
	{
		printf("%d\t%d\t%d\n", linuxScore, javaScore,cScore);
	}
	fclose(fp);	
	
	return 0;
}
