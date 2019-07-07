/* Which will this file do:
Print 1 line of characters (Hello World!) and stop the machine to see the result.
*/
// github.com/proffy2122github/testrepo
#include <stdio.h> // contains printf("");
#include <iostream> // Including <iostream> automatically will also includes <ios>, <streambuf>, <istream>, <ostream> and <iosfwd>, sound like Apple ios.
#include <conio.h> // contains getch(); command
// all of the library for this file.

int main(int argc, char **argv)
{
  // insert printf command
  printf("Hello World!\n");
  _getch; // or _getch();
}
/* Note: in 2020, the getch command must be typed _getch or _getch();. Otherwise Visual Studio 2019 will fail to build the project with C4996 error */
/* Error	C4996	 'getch': The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _getch. */
// Compiled and ran in Visual Studio 2019 environment.
