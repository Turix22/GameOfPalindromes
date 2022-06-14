//
//  main.cpp
//  GameOfPalindromes
//
//  Created by Alexandra Turica on 14.06.22.
//

#include <iostream>
#include "PalindromeCheck.h"
#include "StoryIntro.h"


int main(int argc, const char * argv[]) {
  StoryIntro();
    
  std::cout << "A palindrome is the key you need. Type in below a string of characters and find out if it can be rearranged into the palindrome key you need:\n";
    std::cout << " " << std::endl;
    
    std::string string;
    std::cin >> string;
    
  PalindromeCheck(string);
    return 0;
}
