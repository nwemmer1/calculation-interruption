/*
	Nathan Wemmer
	Human Computer Interaction (HCI)
	Programming assignment 1
	Part 1
	9/16/2019
*/
#include <cstdlib>
#include <math.h>
#include <string.h>
#include <iomanip>
#include <iostream>
#include <string>

int main()
{
	const double pi = 3.14;
	char exitChar = '/0';
	int numOfIterations = 0;
	char buff[20] = {0};
	double piCalc = pi;

	while(exitChar != 'q')
	{
		std::string duringLoop;
		std::cout << "Please enter an interger or 'q' to exit.\n";
		memset(buff, 0, 20);
		std::cin.getline(buff,20);
		numOfIterations = atoi(buff);

		if((numOfIterations == 0) && (strlen(buff) == 1) && ('q' == buff[0]))
		{
			std::cout << "Now exiting program.." << std::endl;
			break;
		}
		else if (numOfIterations > 0)
		{
			std::cout << "You have asked to compute the square root of PI " << numOfIterations << " times." << std::endl;
			for(int i = 1; i<=numOfIterations; i++)
			{
				std::cout << i << std::endl;
				piCalc = sqrt(piCalc);
			}
		}
		std::cout << "The square root of PI is " << piCalc << std::endl;

	}
}