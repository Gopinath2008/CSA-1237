#include <stdio.h>
#include <time.h>
void timeConsumingTask()
{
    for (int i = 0; i < 1000000000; ++i) 
	{
    }
}
int main()
{
    clock_t start, end;
    double cpu_time_used;
    printf("Starting the task...\n");
    start = clock(); 
    timeConsumingTask();
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Task completed. CPU time used: %f seconds\n", cpu_time_used);
    return 0;
}

