// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "dice.h"

#include <stdlib.h>

#include <iostream>

using std::cin, std::cout;

void Dice::Roll() {
  // random function then setvalue
  int random = rand() % 6 + 1;
  this->SetValue(random);
}

void Dice::SetValue(int random) {
  // Set Value
  currentRole = random;
}

void PlayYahtzee() {
  bool rollingFlag = true;
  char rolling;
  int roll1;
  int roll2;
  int roll3;
  Dice game;
  // while game is active
  while (rollingFlag) {
    // user inputes
    cout << "\nDo you want to roll? y/n ";
    cin >> rolling;
    // Break if the don't wnt to role
    if (rolling == 'n') {
      break;
    }
    // Roll one dice
    game.Roll();
    // Get the value
    roll1 = game.GetValue();
    // Roll the die again and get the value (repeat)
    game.Roll();
    roll2 = game.GetValue();
    // Roll the die again and get the value (repeat)
    game.Roll();
    roll3 = game.GetValue();
    // display three roles
    cout << roll1 << " " << roll2 << " " << roll3;
    // if the values are equal show yahtzee
    if (roll1 == roll2 && roll2 == roll3) {
      cout << "\nYahtzee!";
    }
  }
  cout << "\nGoodbye!";
}
