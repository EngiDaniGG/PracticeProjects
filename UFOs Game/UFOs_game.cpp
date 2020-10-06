#include <iostream>
#include "ufo_functions.hpp"

/* Invaders from outer space have arrived and are abducting humans using  */
/* tractor beams. Players must crack the codeword to stop the abduction!  */

int main() {

  std::string codeword = "codecademy";  // This is the codeword the player is trying to guess
  std::string answer = "__________";    // This value displays correctly guessed letters with blanks in between
  int misses = 0;                       //
  std::vector <char> incorrect;
  bool guess = false;
  bool correct = false;
  char letter;
  greet();


  while(answer != codeword && misses < 7)  // If the player misses 7 times or answer is correct the loop finish
  {
    display_misses(misses);  // For display the player’s abduction status by way of UFO abduction ASCII art
    display_status(answer, incorrect); // This will track whether the player guessed a correct letter and print the incorrect letter
    std::cout << "Please enter your guess: \n";
    std::cin >> letter;
    
    // Now check if the player guessed a letter correctly, for stop the abduction or not
    for(int i = 0; i < codeword.size(); i++){
      if(codeword[i] == letter){
        answer[i] = letter;
        correct = true;
      }
    }
    if(correct == true){
      std::cout << "Correct!\n";
    }
    else{
      std::cout << "Incorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;
    }
    correct = false;
    guess = false;
    
  }
  end_game(answer, codeword); // Print the final message
}
