#include <iostream>
#include <vector>
#include <string>

/* Takes a phrase like "turpentine and turtles" and translate it into */ /* its “whale talk” equivalent, "uueeieeauuee".                       */
/*                                                                    */
/* There are a few simple rules for translating text to whale         */
/* language:                                                          */
/*    - There are no consonants. Only vowels excluding the letter y.  */
/*    - The u‘s and e‘s are extra long, so we must double them.       */

int main(){

  std::string input = "hi, human";
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};  //Initialize de vector with the vowels
  std::string result; // variable where the result will be stored

  for(int i = 0; i < input.size(); i++){

    for(int j = 0; j < vowels.size(); j++){

      if(input[i] == vowels[j]){
          result.push_back(input[i]);
          
          if(input[i] == 'e' || input[i] == 'u'){
            result.push_back(input[i]);
           
            }
          }
      }
      
    }
  std::cout << result << "\n";
  }

