/*  Author: Nicholas Bleeker
    Date: 10/7/2025
    Project: Learn C++: Vectors (Ch.5, Project 1)
    Description: Write a C++ program that promts the user for a string to convert to "whale talk".
        Whale talk consist of only vowles (excluding y) with 'u' and 'e' being doubled.
        e.g. "turpentine and turtles" translates to "uueeieeauuee".

*/
#include <iostream>
#include <vector>
#include <string>

int main() {
  std::string word;
  std::cout << "Enter a sentence to convert to whale talk: ";
  std::getline(std::cin, word);

  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> result;

  for (int i = 0; i < word.size(); i++) {
    for (int j = 0; j < vowels.size(); j++) {
      // Checks word for vowels in the vowels vector
      if (word[i] == vowels[j]) {
        result.push_back(word[i]);
        // Doubles 'u's and 'e's
        if (word[i] == 'e' || word[i] == 'u') {
          result.push_back(word[i]);
        }
      }

    }
  }

  std::cout << word << " converted to whale talk is: ";
  // Iterates through results vector and outputs the result
  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i];
  }
  std::cout << "\n";
}
