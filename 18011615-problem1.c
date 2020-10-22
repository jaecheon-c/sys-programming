#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int main(void)
{
	pid_t pid;
	//Check the error in fork
	if((pid=fork()) < 0)
		perror("error in fork()\n");
	
	//child code
	else if(pid==0)
	{
		printf("Child PID is %d, Parent PID is %d.\n",getpid(),getppid());
	}	
	
	//parent code
	else
	{
		sleep(2); //for the parent code can lives longer
		printf("Parent PID is %d\n",getpid());
	}
}
