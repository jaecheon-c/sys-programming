#include <stdio.h>

int main(void)
{
	int system,algorithm,network;
	double average;
	printf("Input the system programming, algorithm, and network score: ");
	scanf("%d%d%d", &system,&algorithm,&network);
	
	average = (system+algorithm+network)/3;

	printf("The average of the three subject is %d.\n",(int)average);
	return 0;
}
