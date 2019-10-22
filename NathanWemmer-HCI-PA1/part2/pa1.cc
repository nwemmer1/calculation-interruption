#include <cstdlib>
#include <math.h>
#include <string.h>
#include <iomanip>
#include <iostream>
#include <string>
#include <ncurses.h>
#include <curses.h>
//#include <windows.h>
//#include <conio.h>
int main()
{
	const double pi = 3.14;
	char exitChar = '\0';
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
		bool completed = false;

		if((numOfIterations == 0) && (strlen(buff) == 1) && ('q' == buff[0]))
		{
			std::cout << "Now exiting program.." << std::endl;
			break;
		}
	
		else if (numOfIterations > 0)
		{
			std::cout << "You have asked to compute the square root of PI " << numOfIterations << " times. " << std::endl;
			for(int i = 1; i <= numOfIterations; i++)
			{
				int ch;
				if(completed == true)
					break;
				//getline(std::cin,duringLoop);
				bool spaceOrNot = isspace(duringLoop[0]);
				duringLoop = std::cin.peek();
				//This is the code if the header 'windows.h' is included on the computer
				//Add this code if you have the Windows SDK, doesn't run on my linux virutal machine
				/*
				if(GetKeyState('s') & 0x8000)
				{
					std::cout << "now exiting program" << std::endl;
					break;
				}
				*/
				 //This is the code if the header 'conio.h' is included on the computer
				 //Probably won't have this on computer (it's an old MS-DOS header file to provide console input/output)
				//ch = getch();
				//if(kbhit() && (ch == 's' || ch == 'S'))
			//	{
			//		std::cout << "Now exiting the programm.." << std::endl;
			//		break;
			//	}
				
				
				if(duringLoop == "s" || duringLoop == "S")
				{
					completed = true;
				}
				/*
				if(!spaceOrNot && (duringLoop == "s" || duringLoop == "S"))
				{
					completed == true;
				}
				*/
				std::cout << i << std::endl;
				piCalc = sqrt(piCalc);

			}
			
		}
		std::cout << "The square root of PI is " << piCalc << std::endl;
    }
}

