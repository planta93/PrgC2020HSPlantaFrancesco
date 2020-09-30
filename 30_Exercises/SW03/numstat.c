#include <stdio.h>
#include <stdlib.h>


int main( int argc, char *argv[]	)
{
	
	float inputValue1 = 0, inputValue2 = 0;
	
	
	
	
	
	if (argc == 1)
	{
		printf("Number of input arguments: %d\n", argc);
		printf("Insert two floats:\n");
		scanf("%f\n%f", &inputValue1, &inputValue2);
		printf("Number of input arguments: %d\n", argc);
		
		if (inputValue1 >= inputValue2)
		{
			printf("Input1:\t\t%.3f >= Input2:\t%.3f\n", inputValue1, inputValue2);
			printf("Sum:\t\t%.3f + %.3f= %.3f\n", inputValue1, inputValue2, inputValue1+inputValue2);
			printf("Difference:\t%.3f - %.3f= %.3f\n", inputValue1, inputValue2, inputValue1-inputValue2);
			printf("Product:\t%.3f * %.3f= %.3f\n", inputValue1, inputValue2, inputValue1*inputValue2);
			printf("Ratio:\t\t%.3f / %.3f= %.3f\n", inputValue2, inputValue1, inputValue2/inputValue1);
	
		}
		
		
		
		else
		{
			printf("Input1:\t\t%.3f <=  Input2:%.3f\n", inputValue1, inputValue2);
			printf("Sum:\t\t%.3f + %.3f= %.3f\n", inputValue2, inputValue1, inputValue2+inputValue1);
			printf("Difference:\t%.3f - %.3f= %.3f\n", inputValue2, inputValue1, inputValue2-inputValue1);
			printf("Product:\t%.3f * %.3f= %.3f\n", inputValue2, inputValue1, inputValue2*inputValue1);
			printf("Ratio:\t\t%.3f / %.3f= %.3f\n", inputValue1, inputValue2, inputValue1/inputValue2);

		}

	
	}
	
	else 
	{
		printf("usage message: RTFI!\n");
	}

return 0;
}
