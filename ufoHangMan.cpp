/*  Author: Nicholas Bleeker
    Date: 10/7/2025
    Project: Learn C++: Functions (Ch.6, Project 1, File 1/3)
    Description: Write a C++ program that implements the main logic for a UFO-themed Hangman game.
        Players must guess the secret codeword to stop an abduction.
        This project demonstrates multi-file organization using a 
        main file, a header file, and a functions file.
 */
#include <iostream>
#include "ufo_functions.hpp"

int main() {
  greet();
  
  std::string codeword = "codecademy";  // code word
  std::string answer = "__________";    // players answer

  int misses = 0;

  std::vector<char> incorrect;
  bool guess = false;
  char letter;

  // Enter Game State
  while (answer != codeword && misses < 7) {
    display_misses(misses);
    display_status(incorrect, answer);
    std::cout << "Please enter your guess: ";
    std::cin >> letter;
    for(int i = 0; i < codeword.size(); i++) {
      if (letter == codeword[i]) {
        answer[i] = letter;
        guess = true;
      }
    }

    if (guess) {
      std::cout << "Correct!";
    } else {
      std::cout << "Incorrect! The tractor beam pulls the person in further.";
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;
  }

  // End Game State
  end_game(answer, codeword);

}