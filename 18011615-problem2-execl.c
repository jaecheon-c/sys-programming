#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
void main()
{
	pid_t pid;
	pid = fork();

	switch(pid)
	{
		case -1: //if fork failed
			perror("fork() failed\n");
			break;
		case 0: //child process. execute execl function 
			execl("/bin/ls","/bin/ls","-al",NULL);
			perror("execl() failed\n");
			break;
		default: // parent process. if child process(case 0) execute execl function, parent print function executed alarm
			wait((int *)0);
			printf("execl() function execution\n");
			exit(0);
	}
}
