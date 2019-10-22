Nathan Wemmer
HCI Programming Assignment 1
Linux 

Instructions to run program:
There is a makefile included with each part of the project.
Type 'make' to compile the project,.
Type './pa1' to start the program.

In Part 1:
No important things, this part runs fine, without issues.

In Part 2:
While working on programming assignment 2, I learned a lot about packages that are 
exclusive to certain operating systems. My first problem, that you mentioned in class, 
is that the peek function was not working the way it was thought to. To go around this, 
I attempted using the <windows.h> library and the <conio.h>. Installing these to my 
computer was hard because I use an Ubuntu Virtual Machine. I have everything laid out 
and commented out that does not work for every machine, but the methods are there and should be right 
after studying the documentation for the header files and methods.
These use methods like kbhit() (for conio.h, old and not for linux) and GetKeyState (from 
the Windows SDK, also unable to get on my linux system). 
I also attempted to use an implementation of conio.h for linux but it was 
not in english and I was getting errors i couldn't fix since i could not read it.
After trying to work around using either of these and to use a header 
library that is compatitble on all systems, I have realized how 
C++ is not the best language to use for this event focused program. 
Also, not commented out is the attempt I made using the peek function.
I left this so it would compile instead of getting an error that the grader
does not have the required header files.


