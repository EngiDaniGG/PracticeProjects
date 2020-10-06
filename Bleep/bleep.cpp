#include <iostream>
#include <string>
#include "functions.hpp"

/* The program “bleeps” any word that’s passed in. You’ll test this */
/* out with "broccoli", which has been recently banned by the       */
/* Department.                                                      */

int main(){

  std::string word="broccoli"; // Predefined word banned
  std::string text="I sometimes eat broccoli. There are three interesting things about broccoli. Number One. Nobody knows how to spell it. Number Two. No matter how long you boil it, it's always cold by the time it reaches your plate. Number Three. It's green. #broccoli";
  // Text above for check the bleep
  std::cout << word << "\n" ;
  std::cout << text << "\n" ;
  bleep(word, text);
  std::cout << word << "\n" ;
  std::cout << text << "\n" ;


}