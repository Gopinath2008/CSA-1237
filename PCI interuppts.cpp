#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
void interruptHandler(int signum)
{
    printf("PCI interrupt received. Processing...\n");
}
int main()
{
    if (signal(SIGINT, interruptHandler) == SIG_ERR)
	{
        perror("Error registering signal handler");
        return 1;
    }

    printf("Waiting for PCI interrupt (Press Ctrl+C to simulate)...\n");
    while(1)
	{
        sleep(1);
    }
}

