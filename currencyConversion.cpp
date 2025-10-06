/*  Author: Nicholas Bleeker
    Date: 10/6/2025
    Project: Learn C++: Introduction (Ch.2, Project 3)
    Description: Write a C++ program that converts a given amount of different currencies into the equivalent USD value.
*/

#include <iostream>

int main() {
  double pesos, reais, soles, dollars;

  std::cout << "Enter number of Colombia Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;
  
  // 1 peso = .53 usd, 1 reais = .19 usd, 1 sole = .29 usd
  double conversion1 = .53;
  double conversion2 = .19;
  double conversion3 = .29;

  // sum of currencies in USD
  dollars = (pesos * conversion1) + (reais * conversion2) + (soles * conversion3);

  std::cout << "US Dollars = $" << dollars << "\n";
}