/* Which will this file do:
Print 1 line of characters (Hello World!) and stop the machine to see the result.
*/
// github.com/proffy2122github/testrepo
#include <stdio.h>
#include <iostream>
#include <conio.h>
// all of the library for this file.

int main(int argc, char **argv)
{
  // insert printf command
  printf("Hello World!\n");
  _getch; // or _getch();
}
/* Note: in 2020, the getch command standalone must be typed _getch or getch();. Otherwise Visual Studio 2019 will fail to build the project with C4996 error */
/* Error	C4996	 'getch': The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _getch. See online help for details.	Project2	C:\Users\Administrator\source\repos\Project2\Project2\Source.cpp	8	
*/
