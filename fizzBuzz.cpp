/*  Author: Nicholas Bleeker
    Date: 10/7/2025
    Project: Learn C++: Introduction (Ch.4, Project 1)
    Description: Write a C++ program that outputs numbers 1 - 100.
        For multiples of 3 print "Fizz", multiples of 5 print "Buzz", and numbers which are multiples of both 3 and 5 print "FizzBuzz". 
        Create a for loop version and a while loop version.

*/
#include <iostream>

int main() {
  
  // for loop
  std::cout << "for loop version:\n";
  for (int i = 1; i <= 100; i++) {
    if (i%3 == 0 && i%5 == 0) {
      std::cout << "FizzBuzz\n";
    } else if (i%3 == 0) {
      std::cout << "Fizz\n";
    } else if (i%5 == 0) {
      std::cout << "Buzz\n";
    } else {
      std::cout << i << "\n";
    }
  }

  // while loop
  std::cout << "\nwhile loop version:\n";
  int i = 1;
  while (i <= 100) {
    if (i%3 == 0 && i%5 == 0) {
      std::cout << "FizzBuzz\n";
    } else if (i%3 == 0) {
      std::cout << "Fizz\n";
    } else if (i%5 == 0) {
      std::cout << "Buzz\n";
    } else {
      std::cout << i << "\n";
    }

    i++;
  }
}