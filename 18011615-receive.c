#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void main()
{
	struct sigaction act;
	printf("pid = %d\n",getpid());
	sigemptyset(&act.sa_mask);
	act.sa_flags=0;
	
	if(sigaction(SIGTSTP,&act,NULL)==-1)
	{
		perror("sigaction");
		exit(1);
	}
	while(1)
		sleep(2);
}
