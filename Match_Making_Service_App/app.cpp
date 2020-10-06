#include <iostream>
#include "profile.hpp"

/* Your friend is building a new match-making service app, build a */
/* Profile class that allows users to generate profile objects.    */
/*                                                                 */
/* The Profile should store the following information:             */
/*  - User’s name                                                  */
/*  - User’s age                                                   */
/*  - User’s city                                                  */
/*  - User’s country                                               */
/*  - User’s pronouns                                              */
/*  - User’s hobbies                                               */
/* And this is how users should be able to interact with their own */
/* profiles:                                                       */
/*  - Create a new profile with some information                   */
/*  - Add hobbies                                                  */
/*  - View profile                                                 */

int main() {
  Profile sam("Sam Drakkila", 30, "New York", "USA","he/him");
  sam.add_hobby("listening to audiobooks and podcasts");
  sam.add_hobby("playing rec sports like bowling and kickball");
  sam.add_hobby("writing a speculative fiction novel");
  sam.add_hobby("reading advice columns");
  sam.add_hobby("play videogames");

  
  std::cout << sam.view_profile();

  

}