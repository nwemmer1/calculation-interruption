#include <cstdlib>
#include <math.h>
#include <string.h>
#include <iomanip>
#include <iostream>
#include <string>
int main()
{
	const double pi = 3.14;
	char exitChar = '\0';
	int numOfIterations = 0;
	char buff[20] = {0};


	while(exitChar != 'q')
	{

		std::cout << "Please enter an interger or 'q' to exit.\n";
		memset(buff,0,20);
		std::cin.getline(buff,20);
		numOfIterations = atoi(buff);

		if((numOfIterations == 0) && (strlen(buff) == 1) && ('q' == buff[0]))
		{
			std::cout << "Now exiting program..";
			break;
		}
	
		else if (numOfIterations > 0)
		{
			std::cout << "You have asked to compute the square root of PI " << numOfIterations << " times. " << std::endl;
			for(int i = 0; i <= numOfIterations; i++)
			{
				std::cout << i << std::endl;
			}


		}
    }
}

