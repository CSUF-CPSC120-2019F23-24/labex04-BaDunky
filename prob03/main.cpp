// Sales prediction
#include <iostream>

int main(){
  long last_year = 2103419277;
  double sale_increase = 1.18;

  long current_year = last_year * sale_increase; // The variable last_year is promoted to a double then back into a long
                                                 // which has a biggerrange than an integer
  std::cout << "Last year's sales were $"<< last_year << '\n';
  std::cout << "This year's sales prediction: $" << current_year << '\n';

  return 0;
}
