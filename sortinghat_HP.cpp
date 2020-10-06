#include <iostream>
/* The Sorting Hat is a talking hat at Hogwarts that magically determines which of the four school Houses each new student belongs most to: */
/* gryffindor                                                                                                                               */
/* hufflepuff                                                                                                                               */
/* ravenclaw                                                                                                                                */
/* slytherin                                                                                                                                */

int main(){

  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slythering = 0;
  int answer1;
  int answer2;
  int answer3;
  int answer4;
  int max = 0;
  std::string house;

  std::cout << "The Sorting Hat Quiz!\n";

  std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n";
  std::cin >> answer1;

  if(answer1 == 1) ++hufflepuff;
  else if(answer1 == 2) ++slythering;
  else if(answer1 == 3) ++ravenclaw;
  else if(answer1 == 4) ++gryffindor;
  else std::cout << "Invalid output\n";

  std::cout << "Q2) Dawn or Dusk:\n\n";
  std::cout << "  1) Dawn\n";
  std::cout << "  2) Dusk\n";
  std::cin >> answer2;

  if(answer2 == 1) {
    ++ravenclaw;
    ++gryffindor;
  }
  else if(answer2 == 2){
    ++hufflepuff;
    ++slythering;
  }
  else std::cout << "Invalid output\n";
  
  std::cout << "Q3) Which kind of instruments most pleases your ear:\n\n";
  std::cout << "  1) The Violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drum\n";
  std::cin >> answer1;

  if(answer3 == 1) ++slythering;
  else if(answer3 == 2) ++hufflepuff;
  else if(answer3 == 3) ++ravenclaw;
  else if(answer3 == 4) ++gryffindor;
  else std::cout << "Invalid output\n";

  std::cout << "Q4) Which road tempts you most:\n\n";
  std::cout << "  1) Thewide, sunny grassy lane\n";
  std::cout << "  2) The narrow, dark, lanter-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods\n";
  std::cout << "  4) The cobbled street lined (ancient buildings)\n";
  std::cin >> answer4;

  if(answer4 == 1) ++hufflepuff;
  else if(answer4 == 2) ++slythering;
  else if(answer4 == 3) ++gryffindor;
  else if(answer4 == 4) ++ravenclaw;
  else std::cout << "Invalid output\n";

  if(gryffindor > max){
    max = gryffindor;
    house = "Gryffindor";
  }

  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }

  if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }

  if (slythering > max) {
    max = slythering;
    house = "Slythering";
  }

  std::cout << house << "!\n";
  }
