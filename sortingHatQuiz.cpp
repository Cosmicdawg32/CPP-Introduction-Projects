/*  Author: Nicholas Bleeker
    Date: 10/7/2025
    Project: Learn C++: Introduction (Ch.3, Project 2)
    Description: Write a C++ program that asks the user some questions and places them into one of the four Harry Potter Houses.
*/
#include <iostream>

int main() {
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int ans1, ans2, ans3, ans4;

  std::cout << "The Sorting Hat Quiz!\n";

  //Question 1
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n";

  std::cin >> ans1;

  switch (ans1) {
    case 1:
      hufflepuff++;
      break;
    case 2:
      slytherin++;
      break;
    case 3:
      ravenclaw++;
      break;
    case 4:
      gryffindor++;
      break;
    default:
      std::cout << "Invalid input.\n";
      break;
  }

  //Question 2
  std::cout << "Q2) Dawn or Dusk?\n\n";
  std::cout << "  1) Dawn\n";
  std::cout << "  2) Dusk\n";

  std::cin >> ans2;

  switch (ans2) {
    case 1:
      gryffindor++;
      ravenclaw++;
      break;
    case 2:
      slytherin++;
      hufflepuff++;
      break;
    default:
      std::cout << "Invalid input.\n";
      break;
  }

  //Question 3
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";
  std::cout << "  1) The violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drums\n";

  std::cin >> ans3;

  switch (ans3) {
    case 1:
      slytherin++;
      break;
    case 2:
      hufflepuff++;
      break;
    case 3:
      ravenclaw++;
      break;
    case 4:
      gryffindor++;
      break;
    default:
      std::cout << "Invalid input.\n";
      break;
  }

  //Question 4
  std::cout << "Q4) Which road tempts you most?\n\n";
  std::cout << "  1) The wide, sunny grassy lane\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods\n";
  std::cout << "  4) The cobbled street lined (ancient buildings)\n";

  std::cin >> ans4;

  switch (ans4) {
    case 1:
      hufflepuff++;
      break;
    case 2:
      slytherin++;
      break;
    case 3:
      gryffindor++;
      break;
    case 4:
      ravenclaw++;
      break;
    default:
      std::cout << "Invalid input.\n";
      break;
  } 

  int max = 0;
  std::string house;

  // Determines which House the user belongs to
  if (gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  }

  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }

  if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }

  if (slytherin > max) {
  
    max = slytherin;
    house = "Slytherin";
  
  }

  std::cout << house << "!\n";
}