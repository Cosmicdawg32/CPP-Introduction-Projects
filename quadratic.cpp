/*  Author: Nicholas Bleeker
    Date: 10/6/2025
    Project: Learn C++: Introduction (Ch.2, Project 2)
    Description: Write a C++ program that solves a quadratic equation of the form 
        ax^2 + bx + c = 0 using the quadratic formula.
*/

#include <iostream>
#include <cmath>

int main() {
  double a;
  double b;
  double c;

  std::cout << "Enter a: ";
  std::cin >> a;

  std::cout << "Enter b: ";
  std::cin >> b;

  std::cout << "Enter c: ";
  std::cin >> c;

  // Formula for the + root
  double root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
  // Formula for the - root
  double root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";
}