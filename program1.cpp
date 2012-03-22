#include <iostream>//#include is a Source file inclusion preprocessor directive.using double-quotes vs angle-brackets determines which directories the compiler is going to look for the file <iostream>.

using namespace std;//use the function cout.

int main()//function named main returns an integer ({})
{
  cout<<"Hello World! Spring break is upon us!\n";//cout object uses insertion operators << to output text.
  cin.get();//reads in input. forces the user to have to press "enter."
}//after reaching the end of main, an integer is returned a value of 0. 
