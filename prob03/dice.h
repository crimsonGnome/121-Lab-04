// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#ifndef DICE_H
#define DICE_H

class Dice {
 public:
  // Setter
  void Roll();
  // Getter
  int GetValue() { return currentRole; };

 private:
  // Private function. Set Value should only be accessed after random
  void SetValue(int random);

  int currentRole;
};

void PlayYahtzee();

#endif  // DICE_h
