// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullteron.edu

#include <iostream>
#include <string>
#include <vector>

#include "chirp.h"

using std::cin, std::cout, std::string, std::vector;

int main() {
  std::string input;
  const std::string prompt =
      "\nYou can \"chirp\" a new message to Chirper, "
      "\"like\" an existing chirp, or \"exit\". What do you want to do? ";
  std::cout << prompt;
  std::getline(std::cin, input);
  //
  // 1. Create a vector to hold your chirps.
  //
  vector<Chirp> chirps;

  while (input != "exit") {
    if (input == "chirp") {
      std::string user_message;
      std::cout << "What's your message? ";
      std::getline(std::cin, user_message);

      //
      // 2. Create a new Chirp object and set the message to user_message. Add
      // the new chirp to the vector.
      //
      // Intialize chirp object from Chirp class
      Chirp chirp;
      // setMessage From user
      chirp.SetMessage(user_message);
      // Push Back Vector with new chirp
      chirps.push_back(chirp);

    } else if (input == "like") {
      std::string user_index_string;
      std::cout << "Which index do you want to like? ";
      std::getline(std::cin, user_index_string);
      int user_index = std::stoi(user_index_string);

      //
      // 3. Add a like to the Chirp object at index user_index in the vector.
      // You will need to offset user_index to the zero-based indexing that
      // matches your vector.
      //
      // Set arrayIncex fron user in put index
      int arrayIndex = user_index - 1;
      // Set the correct indext + 1
      chirps[arrayIndex].AddLike();
    }

    //
    // 4. Print the contents of the chirp vector. You will need to loop through
    // the entries in the vector. Check your formatting matches the README:
    // Show the user indices starting at 1 instead of 0, and include the
    // number of likes.
    //
    cout << "Chirper has " << chirps.size() << " chirps:\n";
    // Loop Through all Chirps after each loop
    for (size_t i = 0; i < chirps.size(); i++) {
      int currentIndex = i + 1;
      cout << currentIndex << ". " << chirps[i].GetMessage() << " ("
           << chirps[i].GetLikes() << " likes)";
    }

    std::cout << prompt;
    std::getline(std::cin, input);
  }
  cout << "\nGoodbye!";
  return 0;
}
