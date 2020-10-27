#include <stdio.h>
#include <stdlib.h>


int main( int argc, char *argv[]	)
{
	
	float inputValue1 = atof(argv[1]), inputValue2 = atof(argv[2]);
	
	
	
	
	
	if (argc == 3)
	{
		//scanf("%f\n%f", &inputValue1, &inputValue2);
		
		
		
		if (inputValue1 >= inputValue2)
		{
			printf("Input1:\t\t%.3f >= Input2:%.3f\n", inputValue1, inputValue2);
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
		printf("Usage message: Please insert two floats!\n");
	}

return 0;
}
