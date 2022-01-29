// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include <stdlib.h>

#include <iostream>
#include <string>

#include "cpputils/graphics/image.h"
using graphics::Color, graphics::Image, std::cin, std::cout, std::string;

int HexToInteger(std::string hex) {
  // Only works on strings length 2.
  if (hex.size() != 2) {
    return -1;
  }
  // Convert hex string, base 16 string, to integer.
  const int kBaseSixteen = 16;
  return strtoul(hex.c_str(), nullptr, kBaseSixteen);
}

int main() {
  // Declare variables
  string hex;
  string partialHex;
  const int height = 100;
  const int width = 100;
  int red = 0;
  int green = 0;
  int blue = 0;

  // Enter hexidecimal
  cout << "Enter a hex code: ";
  cin >> hex;

  // Loot through the length of the string
  for (int i = 0; i < hex.size(); i = i + 2) {
    // skip every 2
    int temp = 2;
    partialHex = hex.substr(i, temp);
    // first set of 2
    if (i == 0) {
      red = HexToInteger(partialHex);
      // Second set of 2
    } else if (i == 2) {
      green = HexToInteger(partialHex);
      // thrid set of 2
    } else {
      blue = HexToInteger(partialHex);
    }
  }
  // Create a new color object
  Color color(red, green, blue);
  // Create the image
  Image image(width, height);

  // Draw rectangle
  image.DrawRectangle(0, 0, width, height, color);
  // apend string to have .bmp to the file name
  hex.append(".bmp");
  image.SaveImageBmp(hex);
  cout << "\n File saved at " << hex;

  return 0;
}
