/* 
Game Rock, Paper, Scissors, Lizard, Spock

RULES:
  - Scissors cuts Paper.
  - Paper covers Rock.
  - Rock crushes Lizard.
  - Lizard poisons Spock.
  - Spock smashes Scissors.
  - Scissors decapitate Lizard.
  - Lizard eats Paper.
  - Paper disproves Spock.
  - Spock vaporizes Rock.
  - (and as it always has) Rock crushes Scissors
  */
#include <iostream>
#include <stdlib.h>
#include "functions.hpp"

int main(){
  
  srand(time(NULL));              // It' necessary for use rand() function in codecademy.com

  int computer = 0; 
  int user = 0;                   // Number for user's input
  int computer_score = 0;         // Intialize variable t
  int user_score = 0;
  char see_rules;

  std::cout << "=============================================================\n";
  std::cout << "THIS IS THE GAME ROCK, PAPER, SCISSORS, PAPER, LIZARD, SPOCK!\n";
  std::cout << "=============================================================\n\n";
  std::cout << "Remeber it's best of 3! ;)\n\n";
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) lizard\n";
  std::cout << "5) spock\n\n";

  std::cout << "Do you want to see the rules? (y/n)\n";
  std::cin >> see_rules;
  if(see_rules=='y'){
  rules();
  }

  while(user_score < 3 && computer_score < 3){
    std::cout << "\nshoot! (press 9 for surrender)\n";
    std::cin >> user;           // Introduction number from user
    if(user == 9) break;
    computer = rand() % 5 + 1;  // Random number from 1 to 5
    game_rpcls(user, computer, user_score, computer_score);
    std::cout << "\nSCORE: USER _" << user_score << "_   ";
    std::cout << "COMPUTER _" << computer_score << "_\n\n";
  };
  
  if(user_score == 3) std::cout << "Congratulations! you win! :D\n";
  if(computer_score == 3) std::cout << "Computer win! :C\n";
}