/*  Author: Nicholas Bleeker
    Date: 10/7/2025
    Project: Learn C++: Introduction (Ch.3, Project 3)
    Description: Write a C++ program that prompts the user to select either Rock, Paper, Scissors, Lizard, or Spock. 
        The Computer randomly selects one of these options as well. The user's and computer's choices are compared 
        and determines a winner. The results are printed to the console.

*/
#include <iostream>
#include <stdlib.h>

int main() {

  srand(time(NULL));
  int computer = rand() %5+1;   // Selects random value of 1-5
  int user = 0;

  std::cout << "==================================\n";
  std::cout << "rock paper scissors lizards spock!\n";
  std::cout << "==================================\n";

  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n";

  std::cout << "shoot! ";
  std::cin >> user;

  /*                GAME RULES
        Rock: crushes Scissors and Lizard.
        Paper: covers Rock and disproves Spock.
        Scissors: cuts Paper and decapitates Lizard.
        Lizard: eats Paper and poisons Spock.
        Spock: smashes Scissors and vaporizes Rock.
  */  
  
  switch (user) {
    case 1:
      if (computer == 1) {
        std::cout << "Rock vs Rock!\nTie!\n";
      } else if (computer == 2) {
        std::cout << "Rock vs Paper!\nPaper covers Rock!  You lose!\n";
      } else if (computer == 3) {
        std::cout << "Rock vs Scissors!\nRock crushes Scissors! You win!\n";
      } else if (computer == 4) {
        std::cout << "Rock vs Lizard!\nRock crushes Lizard! You win!\n";
      } else {
        std::cout << "Rock vs Spock!\nSpock vaporizes Rock! You lose!\n";
      }
      break;
    case 2:
      if (computer == 1) {
        std::cout << "Paper vs Rock!\nPaper covers Rock! You win!\n";
      } else if (computer == 2) {
        std::cout << "Paper vs Paper!\nTie!\n";
      } else if (computer == 3) {
        std::cout << "Paper vs Scissors!\nScissors cuts Paper! You lose!\n";
      } else if (computer == 4) {
        std::cout << "Paper vs Lizard!\nLizard eats Paper!  You lose!\n";
      } else {
        std::cout << "Paper vs Spock!\nPaper disproves Spock! You win!\n";
      }
      break;
    case 3:
      if (computer == 1) {
        std::cout << "Scissors vs Rock!\nRock crushes Scissors! You lose!\n";
      } else if (computer == 2) {
        std::cout << "Scissors vs Paper!\nScissors cuts Paper! You win!\n";
      } else if (computer == 3) {
        std::cout << "Scissors vs Scissors!\nTie!\n";
      } else if (computer == 4) {
        std::cout << "Scissors vs Lizard!\nScissors decapitates Lizard! You win!\n";
      } else {
        std::cout << "Scissors vs Spock!\nSpock smashes Scissors! You lose!\n";
      }
      break;
    case 4:
      if (computer == 1) {
        std::cout << "Lizard vs Rock!\nRock crushes Lizard! You lose!\n";
      } else if (computer == 2) {
        std::cout << "Lizard vs Paper!\nLizard eats Paper! You win!\n";
      } else if (computer == 3) {
        std::cout << "Lizard vs Scissors!\nScissors decapitates Lizard! You lose!\n";
      } else if (computer == 4) {
        std::cout << "Lizard vs Lizard!\nTie!\n";
      } else {
        std::cout << "Lizard vs Spock!\nLizard poisons Spock! You win!\n";
      }
      break;
    case 5:
      if (computer == 1) {
        std::cout << "Spock vs Rock!\nSpock vaporizes Rock! You win!\n";
      } else if (computer == 2) {
        std::cout << "Spock vs Paper!\nPaper disproves Spock! You lose!\n";
      } else if (computer == 3) {
       std::cout << "Spock vs Scissors!\nSpock smashes Scissors! You win!\n";
      } else if (computer == 4) {
        std::cout << "Spock vs Lizard!\nLizard poisons Spock! You lose!\n";
      } else {
       std::cout << "Spock vs Spock!\nTie!\n";
      }
      break;
    default:
      std::cout << "ERROR! Incorrect value.\n";
      break;
  }
}