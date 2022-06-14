//
//  PalindromeCheck.h
//  GameOfPalindromes
//
//  Created by Alexandra Turica on 14.06.22.
//

#ifndef PalindromeCheck_h
#define PalindromeCheck_h
#include <iostream>
#include <string>
#include <algorithm>


void PalindromeCheck(std::string& palindrom)
{
  std::sort(palindrom.begin(), palindrom.end());
  int i = 0;
  int j = 1;
  while (palindrom.length() > 1)
  {
    if (int(palindrom[i]) == int(palindrom[j]))
    {
      palindrom.erase(palindrom.begin() + i);
      palindrom.erase(palindrom.begin() + i);
    }
    else
    {
      i++;
      j++;
    };
    if (j >= palindrom.length())
      break;
    else
      continue;
  }
    
  if (palindrom.length() > 1)
    std::cout << "The key doesn't fit the door. The usurpers catch up to you, fling the doors open, and capture you." << std::endl;
  else
    std::cout << "The key is a perfect fit. You are saved." << std::endl;
    
}

#endif /* PalindromeCheck_h */
