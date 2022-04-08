#include <iostream>
#include <string>
#include <cmath>

int main() {
  std::cout << "INTEGER DIVISION CALCULATOR:\n\n";
  
  std::string Dividend;
  std::string Divisor;
  
  //Prompts user for dividend
  std::cout << "What do you want to be the dividend? ";
  std::cin >> Dividend;

  //While a character that is not 0-9 is found in the dividend input, reprompt
  
  while (Dividend.find_first_not_of("0123456789") != std::string::npos) {
    std::cout << ("Try again, that wasn't an integer...\n");
    std::cin >> Dividend;
  }

  //Prompts user for divisor and reprompts if input is not an integer
  std::cout << "What do you want to be the divisor? ";
  std::cin >> Divisor;

  //While a character that is not 0-9 is found in the divisor input, reprompt
  
  while (Divisor.find_first_not_of("0123456789") != std::string::npos) {
    std::cout << ("Try again, that wasn't an integer...\n");
    std::cin >> Divisor;
  }
  
  //If either the dividend or divisor are decimals, append "0" to the
  //beginning of the string to properly convert the strings to integers.
  
  if (Dividend[0] == '.') {
      Dividend = Dividend.insert(0, "0");
  }
  if (Divisor[0] == '.') {
      Divisor = Divisor.insert(0, "0");
  }
  
  /*
  Calculates the quotient obtained by integer division and the remainder
  If and else-if statement preform excpetion handling (i.e. if either the 
  divisor or the divisor AND the dividend are 0, return "undefined")
  */
  
  if (round(std::stoi(Divisor)) == 0) {
      std::cout << "ERROR: " << round(std::stoi(Dividend)) << "/" << "0" << 
      " is undefined";
  } else if (round(std::stoi(Dividend)) && round(std::stoi(Divisor)) == 0) {
      std::cout << "ERROR: " << "0" << "/" << "0" << " is undefined";
  } else {
  std::cout << Dividend << "/" << Divisor  << " = " << 
  (std::stoi(Dividend)/std::stoi(Divisor)) << " Remainder " << 
  (std::stoi(Dividend)%std::stoi(Divisor));
  }
}