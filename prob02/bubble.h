// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "cpputils/graphics/image.h"

#ifndef BUBBLE_H
#define BUBBLE_H

class Bubble {
 public:
  // Constructor
  Bubble(graphics::Color color, int size, int x, int y);
  // Setters
  void SetX(int x);
  void SetY(int y);
  void SetSize(int size);
  void SetColor(graphics::Color);
  // ToString method
  std::string ToString() {
    return "Bubble at (" + std::to_string(x) + ", " + std::to_string(y) +
           ") with size " + std::to_string(size) + "\n";
  };

  // Getters
  int GetX() { return x; };
  int GetY() { return y; };
  int GetSize() { return size; };
  graphics::Color GetColor() { return color; };

 private:
  graphics::Color color;
  int size;
  int x;
  int y;
};

#endif  // BUBBLE_H
