#ifndef CHIRP_H
#define CHIRP_H

#include <string>

using std::string;

class Chirp {
 public:
  // Getters
  int GetLikes() { return likes; };
  string GetMessage() { return tweet; };

  // Setters
  void AddLike() { likes = likes + 1; };
  void SetMessage(string x);

 private:
  // Private variables
  string tweet;
  int likes;
};

#endif  // CHIRP_H
