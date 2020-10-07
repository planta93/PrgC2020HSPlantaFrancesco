#include <stdio.h>
#include <stdlib.h>

//function deklaration
long factorial( long n);


int main(int argc, char* argv[])
{

	long input = atoi(argv[1]);
	long result = 0;
	result = factorial(input);
	
	printf("Factorial of %ld is %ld\n", input, result);

return 0;
}


//function defination

long factorial( long n)
{
	long result = 0;
	if( n >= 1)
	{
		result = n*factorial(n-1);
	}

	else
	{
		result = 1;
	}
	return result;
}
