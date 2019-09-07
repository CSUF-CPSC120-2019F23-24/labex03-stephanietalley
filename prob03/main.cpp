// This program calculates a person's height in feet (') and inches (").
#include <iostream>

int main()
{
  int inches, feet, remainder;
  std::cout << "Please enter the person\'s height in inches: ";
  std::cin >> inches;

  //Calculate the height.
  feet = inches / 12;
  remainder = inches % 12;

  //Display the height in feet.
  std::cout << "That person is " << feet << "\'" << remainder << "\"" << std::endl;
}


/*
  int ammount = 97;
  int ten_bills;

  ten_bills = ammount / 10;
  int remainder = ten_bills % 10;

*/
