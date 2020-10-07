#include <stdio.h>
#include <stdlib.h>




long decToBinary( int n );






int main(int argc, char* argv[])
{
	long n = 0;
	
	printf("Enter an integer in decimal:");
	scanf("%ld", &n);
	printf("%ld", decToBinary(n));
	






return 0;
}


long decToBinary( int n )
{

	long c = 0;
	long k = 0;
	
	
	for ( c = 7; c >=0; c--)
	{
		k = n >> c;
		
		if(k & 1)
			printf("1");
		else
			printf("0");
	}
	
	printf("\n");
	

	return n;
}



