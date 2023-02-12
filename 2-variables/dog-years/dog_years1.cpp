#include <iostream>

int main() {
  // Tina is 3 years old.
  int dog_age =  3;

int early_years;
int later_years;
int human_years;
  
  //The first two years of a dog’s life count as 21 human years.
  early_years = 21;

  //Each following year counts as 4 human years.
  later_years = (dog_age - 2) * 4;

  // Your dog's age in human years
human_years = early_years + later_years;

std::cout << "My name is Tina! Ruff ruff, I am " << human_years << " years old in human years.\n";
}
