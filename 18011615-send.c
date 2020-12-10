#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>
void main(int argc, char **argv)
{
	union sigval sig;
	if(argc<2)
	{
		printf("Usage : ./a [process id]\n");
		exit(1);
	}
	sig.sival_int = 18011615;
	sigqueue(atoi(argv[1]),SIGTSTP,sig);
	
}
