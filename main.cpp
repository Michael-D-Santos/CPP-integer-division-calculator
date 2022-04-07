#include <iostream>
#include <string>
#include <cmath>

int main() {
  std::cout << "INTEGER DIVISION CALCULATOR:\n\n";
  
  std::string Dividend;
  std::string Divisor;
  
  std::cout << "What do you want to be the dividend? ";
  //Prompts user for Dividend
  std::cin >> Dividend;
  std::cout << "What do you want to be the divisor? ";
  //Prompts user for Divisor
  std::cin >> Divisor;
  
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