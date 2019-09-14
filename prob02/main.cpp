// This program reads in 3 integers, and calculates the average of the numbers

#include <iostream>

int main()
{
  const int NUM_INTS = 3; // number of values to be averaged

  double num1, num2, num3;
  double average; // average of the numbers


  std::cout << "Enter three integers, each separated by one or more spaces: ";
  std::cin >> num1 >> num2 >> num3; // get the numbers

  average = (num1 + num2 + num3) / NUM_INTS; // calculate the average of the numbers

  // display the average, including the decimal portion
  std::cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is: " << average << std::endl;

  return 0;
}
