// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "bubble.h"

#include "cpputils/graphics/image.h"

using graphics::Color;
// Setting x
void Bubble::SetX(int a) { x = a; };
// Setting y
void Bubble::SetY(int b) { y = b; }
// Setting C
void Bubble::SetSize(int c) { size = c; };
// Setting d
void Bubble::SetColor(Color d) { color = d; };
// Consturctor
Bubble::Bubble(Color color, int size, int x, int y) {
  this->SetX(x);
  this->SetY(y);
  this->SetSize(size);
  this->SetColor(color);
}
