#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int limitValue = 205;
	int maxExecutions = 200;
	int counter = 0;
	while(counter < limitValue){
		counter++;
		printf("# of while loops: %d\n", counter);
		if(counter > maxExecutions )
			{
				printf("max # executions exceeded! Abort Mission!\n");
				break;
			}
		}








return 0;
}
