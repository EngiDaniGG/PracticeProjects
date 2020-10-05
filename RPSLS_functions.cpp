#include <iostream>
#include <stdlib.h>

void game_rpcls(int user1, int user2, int &user1_score, int &user2_score){
  
  
  if(user1 >= 1 && user1 <=5){
    if(user1 == user2) std::cout << "Tie!\n";
    else{
    switch(user1){
      case 1: switch(user2){

                case 2: std::cout << "Paper covers rock. You lose!\n";
                        user2_score++;

                  break;

                case 3: std::cout << "Rock crushes scissors. You win!\n";
                        user1_score++;

                  break;

                case 4: std::cout << "Rock crushes lizard. You win!\n";
                        user1_score++;

                  break;

                case 5: std::cout << "Spock vaporizes rock. You lose!\n";
                        user2_score++;

                  break;

                default: std::cout << "Enter a number from 1 to 5 please!\n";

                  break;

              }

        break;

      case 2: switch(user2){

                case 1: std::cout << "Paper covers rock. You win!\n";
                        user1_score++;

                  break;

                case 3: std::cout << "Scissors cuts paper. You lose!\n";
                        user2_score++;

                  break;

                case 4: std::cout << "Lizard eats paper. You lose!\n";
                        user2_score++;
                  break;

                case 5: std::cout << "Paper disproves Spoke. You win!\n";
                        user1_score++;

                  break;

                default: std::cout << "Enter a number from 1 to 5 please!\n";

                  break;

              }

    
        break;

      case 3: switch(user2){

                case 1: std::cout << "Rock crushes scissors. You lose!\n";
                        user2_score++;

                  break;

                case 2: std::cout << "Scissors cuts paper. You win!\n";
                        user1_score++;

                  break;

                case 4: std::cout << "Scissors decapite lizard. You win!\n";
                        user1_score++;
                  break;

                case 5: std::cout << "Spoke smashes scissors. You lose!\n";
                        user2_score++;

                  break;

                default: std::cout << "Enter a number from 1 to 5 please!\n";

                  break;

              }

        break;

      case 4: switch(user2){

                case 1: std::cout << "Rock crushes lizard. You lose!\n";
                        user2_score++;

                  break;

                case 2: std::cout << "Lizard eats paper. You win!\n";
                        user1_score++;

                  break;

                case 3: std::cout << "Scissors decapite lizard. You lose!\n";
                        user2_score++;
                  break;

                case 5: std::cout << "Lizard poison Spoke. You win!\n";
                        user1_score++;

                  break;

                default: std::cout << "Enter a number from 1 to 5 please!\n";

                  break;

              }
    
        break;

      case 5: switch(user2){

                case 1: std::cout << "Spoke vaporezes rock. You win!\n";
                        user1_score++;

                  break;

                case 2: std::cout << "Paper disproves spoke. You lose!\n";
                        user2_score++;

                  break;

                case 3: std::cout << "Spoke smashes scissors. You win!\n";
                        user1_score++;
                  break;

                case 4: std::cout << "Lizard poison Spoke. You lose!\n";
                        user2_score++;

                  break;

                default: std::cout << "Enter a number from 1 to 5 please!\n";

                  break;

              }
    
        break;

      default: std::cout << "Enter a number from 1 to 5 please!\n";

        break;
      }
    }
  }
else{
  std::cout << "Enter a number from 1 to 5 please!\n";
}

}

void rules(){
  std::cout << "RULES:\n";
  std::cout << "  - Scissors cuts Paper.\n";
  std::cout << "  - Paper covers Rock.\n";
  std::cout << "  - Rock crushes Lizard.\n";
  std::cout << "  - Lizard poisons Spock.\n";
  std::cout << "  - Spock smashes Scissors.\n";
  std::cout << "  - Scissors decapitate Lizard.\n";
  std::cout << "  - Lizard eats Paper.\n";
  std::cout << "  - Paper disproves Spock.\n";
  std::cout << "  - Spock vaporizes Rock.\n";
  std::cout << "  - (and as it always has) Rock crushes Scissors\n";
  
}