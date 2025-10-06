/*  Author: Nicholas Bleeker
    Date: 10/6/2025
    Project: Learn C++: Introduction (Ch.2, Project 1)
    Description: Write a C++ program that calculates the age, in human years, of any dog older than 2.
*/

#include <iostream>

int main() {
  // Dogs age in dog years
  int dog_age = 8;
  // First 2 years of a dogs life count as 21 human years
  int early_years = 21;
  // Every year after 2, each year counts as 4 human years
  int later_years = (dog_age-2)*4;
  // ealy years + later years
  int human_years = early_years + later_years;

  std::cout << "My name is Bella! Ruff ruff, I am " << human_years << " years old in human years.\n";
}