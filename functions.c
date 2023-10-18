#include <stdio.h>
#include <stdlib.h>

int gcd(int u,int v);
float absvalue(float x);
float squareRoot(float x);

int main()
{
	/* Testing gcd */
	printf("GCD of 150 and 35 is %d\n",gcd(150,35));
	printf("GCD of 1026 and 405 is %d\n",gcd(1026,405));
	printf("GCD of 83 and 240 is %d\n",gcd(83,240));

	printf("\n");
	
	/* Testing absolute value */
	printf("Result is %.2f\n",absvalue(-11));
	printf("Result is %.2f\n",absvalue(-15.5));

	printf("\n");

	/*Testing square root */
	printf("Square root of 4 is %.2f\n",squareRoot(4.0));
	printf("Square root of -3 is %.2f\n",squareRoot(-3.0));
	printf("Square root of 3 is %.2f\n",squareRoot(3.0));

	return 0;
}


// Function for GCD
int gcd (int u, int v)
{
        int temp;

        while ( v != 0)
        {
                temp = u % v;
                u = v;
                v = temp;
        }

        return u;
}
                                                                                            
// Function for absolute value                                                              
float absvalue(float x)                                                                     
{                                                                                           
        if (x < 0)                                                                          
        {                                                                                   
                x = -(x);                                                                   
        }                                                                                   
                                                                                            
        return x;                                                                           
}                                                                                           
                                                                                            
                                                                                            
// Function for square root                                                                 
float squareRoot (float x)                                                                          
{    
	const float epsilon = .00001;
	float guess = 1.0,returnValue;

	if ( x < 0 )
	{
		printf("Negative argument to squareRoot.\n");
		returnValue = -1.0;
	}
	
	if (returnValue != -1.0)
	{
	while (absvalue (guess * guess - x) >= epsilon )
	{
		guess = (x / guess + guess) / 2.0;
		returnValue = guess;
	}
	}
        return returnValue;                                                                           
}

