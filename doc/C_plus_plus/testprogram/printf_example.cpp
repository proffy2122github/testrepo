/* Welcome to Proffy2122Github repo's!
This program will:
- Print Hello, World! and Turbo C 2.0 in 2 different columns.
- Stop the machine to see the results we made.
*/
// github.com/proffy2122github/testrepo/new/ 
#include <stdio.h>
#include <conio.h>
// start with int main()
int main()
{
  printf("Hello, World!\n"); // \n force machine to print the sentence / words / anything in the next column. except if there is a backspace, or \t (tab)
  //may force it to print in the next, next column.
  printf("Turbo C 2.0\n");
  // printed 2 sentences.
  _getch(); // we don't use regular getch(); because of error C4996 described in the hello world program. (tested in MS Visual Studio 2019).
}
