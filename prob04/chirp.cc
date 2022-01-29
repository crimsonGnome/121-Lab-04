#include "chirp.h"

#include <string>

using std::string;

// Set Message. Set Basic likes to 0 and set Message.
void Chirp::SetMessage(string x) {
  likes = 0;
  tweet = x;
}
