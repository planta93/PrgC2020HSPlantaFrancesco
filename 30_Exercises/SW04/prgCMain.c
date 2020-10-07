#include <stdio.h>
#include <stdlib.h>


typedef enum
{
	INVALID = 0,
	NUMSTAT,
	CUBIC,
	FACTORIAL,
	NCHOOSEK,
	DECTOBINARY,
	EXIT
} MenuSelection;	

//funtion prototypes
MenuSelection PrintMainMenu(void);
long factorial( long n);
long ComputeCubic( long x );
long nChooseK(long n, long k);
long decToBinary( long decN );
float numstat (double inputValue1, double inputValue2);



int main(int argc, char* argv[])
{

	int runMenu = 1;
	double inputValue1 = 0;
	double inputValue2 = 0;
	MenuSelection menuselection = INVALID;
	
	while( runMenu)
	{
		menuselection = PrintMainMenu();
		switch(menuselection)
		{
			case NUMSTAT:
				printf("NUMSTAT:\n");
				printf("Please insert Float 1:\n");
				scanf("%lf", &inputValue1);
				printf("Please insert Float 2:\n");
				scanf("%lf", &inputValue2);
				numstat ( inputValue1,  inputValue2);
				
				
				break;
				
				
			case CUBIC:
				printf("CUBIC:\n");
				long inputCubic = 0;
				long xCubed= 0;
	
				printf("Input to Compute Cubic:    ");
				scanf("%ld", &inputCubic);
				xCubed = ComputeCubic( inputCubic );
	
				printf("Cubic Value of %ld is %ld\n", inputCubic, xCubed);
				break;
				
								
			case FACTORIAL:
				printf("FACTORIAL:\n");
				long inputFactorial = 0;
				long resultFactorial = 0;
				printf("Input to Compute Factorial:    ");
				scanf("%ld", &inputFactorial);
				
				resultFactorial = factorial(inputFactorial);
	
				printf("Factorial of %ld is %ld\n", inputFactorial, resultFactorial);
				break;
				
				
				
			case NCHOOSEK:
				printf("NCHOOSEK:\n");
				long n = 0, k = 0, waitOnCorrectInput =1;
					while(waitOnCorrectInput)
					{
						printf("Input 1:     ");
						scanf("%ld",&n);
						printf("Input 2:     ");
						scanf("%ld",&k);
						if(n>= 0 && k>= 0 && n>=k){
							printf("nChooseK of %ld and %ld = %ld\n", n, k, nChooseK(n, k));
						break;
						}
						else 
						{
							printf("Invalid Input. RTFI!\n");
						}
										
					}
					break;
			
			case DECTOBINARY:
				printf("DECTOBINARY:\n");
				
					long decN = 0;
					
	
					printf("Enter an integer in decimal:");
					scanf("%ld", &decN);
					decToBinary(decN);
					
	
					
				
				
				
				
				
				break;
				
				
				
			// Menu Stop!	
			case EXIT:
				printf("GAME OVER!\n");
				runMenu = 0;
				break;
		
		
			default:
				printf("Invalid Input!\n");
				break;	
		
		}
	
	}
	
return 0;
}





MenuSelection PrintMainMenu(void)
{

	int selectedMenu = 0;
	printf("------------------------------\n");
	printf("********MAIN MENU*************\n");
	printf("------------------------------\n");
	printf("\n");
	printf("Select between this 6 Options:\n");
	printf("\n");
	printf("%d: Numstat\n", NUMSTAT);
	printf("%d: Cubic\n", CUBIC);
	printf("%d: Factorial\n", FACTORIAL);
	printf("%d: nChooseK\n", NCHOOSEK);
	printf("%d: decToBinary\n", DECTOBINARY);
	printf("%d: Exit\n", EXIT);
	printf("\n");
	printf("Your Choice ->     "); 
	scanf("%d", &selectedMenu);
	
	if(		selectedMenu != NUMSTAT
		&&  selectedMenu != CUBIC		
		&&  selectedMenu != FACTORIAL
		&&  selectedMenu != NCHOOSEK
		&&  selectedMenu != DECTOBINARY
		&&  selectedMenu != EXIT)
		{
			selectedMenu = INVALID;
		}
		return selectedMenu;
		
}

//factorial function
long factorial( long n)
{
	long resultFactorial = 0;
	if( n >= 1)
	{
		resultFactorial = n*factorial(n-1);
	}

	else
	{
		resultFactorial = 1;
	}
	return resultFactorial;
}


//cubic function
long ComputeCubic( long x )
{
	long xCubed = 0;
	xCubed = x * x* x;
	return xCubed;

}

//nChooseK function
long nChooseK(long n, long k)
{
	return factorial(n)/(factorial(k)*factorial(n-k));
}

//decToBinary function

long decToBinary( long decN )
{
	
	long c = 0;
	long k = 0;
	
	printf("%ld in binary is : ", decN);
	for ( c = 7; c >=0; c--)
	{
		k = decN >> c;
		
		if(k & 1)
			printf("1");
		else
			printf("0");
	}
	
	printf("\n");
	
	return 0;
}


float numstat (double inputValue1, double inputValue2)
{
	
			if (inputValue1 >= inputValue2)
		{
			printf("Float1:\t\t%.3f >= Float2:%.3f\n", inputValue1, inputValue2);
			printf("Sum:\t\t%.3f + %.3f= %.3f\n", inputValue1, inputValue2, inputValue1+inputValue2);
			printf("Difference:\t%.3f - %.3f= %.3f\n", inputValue1, inputValue2, inputValue1-inputValue2);
			printf("Product:\t%.3f * %.3f= %.3f\n", inputValue1, inputValue2, inputValue1*inputValue2);
			printf("Ratio:\t\t%.3f / %.3f= %.3f\n", inputValue2, inputValue1, inputValue2/inputValue1);
	
		}
		
		
		
		else
		{
			printf("Float1:\t\t%.3f <=  Float2:%.3f\n", inputValue1, inputValue2);
			printf("Sum:\t\t%.3f + %.3f= %.3f\n", inputValue2, inputValue1, inputValue2+inputValue1);
			printf("Difference:\t%.3f - %.3f= %.3f\n", inputValue2, inputValue1, inputValue2-inputValue1);
			printf("Product:\t%.3f * %.3f= %.3f\n", inputValue2, inputValue1, inputValue2*inputValue1);
			printf("Ratio:\t\t%.3f / %.3f= %.3f\n", inputValue1, inputValue2, inputValue1/inputValue2);

		}
		
		
		
return 0;

	
}















	
