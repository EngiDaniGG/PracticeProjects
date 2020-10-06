#include <iostream>
#include <string>

void bleep(std::string word_bleep, std::string &text_bleep){ 
  std::string aux=text_bleep;
  int j=0;
  for(int i=0; i<text_bleep.length(); i++){
   
      if(word_bleep[j]==text_bleep[i]){
        aux[i]='*';
        j++;
      }          
      else{
        aux=text_bleep;
        j=0;
      }
      if(j==word_bleep.length()){
          text_bleep=aux;
      }

        
      }
    }
    
  


