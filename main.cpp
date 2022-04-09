#include <iostream>
#include <string>
#include <cmath>

/* If function input starts with a decimal, append "0" to beginning of string. 
Furthermore, while a character that is not 0-9 is found in the dividend/divisor
input, reprompt until the user inputs a valid string to be stored in the defined
variable. */

std::string checkInput(std::string &judgedInput) {
  std::string output;

  while (judgedInput.find_first_not_of(".0123456789") != std::string::npos) {
    std::cout << "Try again, use numeric inputs only...\n";
    std::cin >> judgedInput;
    }

  if (judgedInput.front() == '.' && judgedInput.find_first_not_of(".0123456789")
    == std::string::npos) {
      output = std::stoi(judgedInput.insert(0, "0"));
  }

  return output;
}

int main() {
  std::cout << "INTEGER DIVISION CALCULATOR:\n\n";
  
  std::string Dividend;
  std::string Divisor;
  
  //Prompts user for dividend

  std::cout << "What do you want to be the dividend? ";
  std::cin >> Dividend;
  
  checkInput(Dividend);

  //Prompts user for divisor

  std::cout << "What do you want to be the divisor? ";
  std::cin >> Divisor;
  
  checkInput(Divisor);
  
  //Calculates the quotient obtained by integer division and the remainder
  //If and else-if statement preform excpetion handling (i.e. if either the 
  //divisor or the divisor AND the dividend are 0, return "undefined")
  
  if (round(std::stoi(Divisor)) == 0) {
      std::cout << "ERROR: " << round(std::stoi(Dividend)) << "/" << "0" << 
      " is undefined";
  } else if (round(std::stoi(Dividend)) && round(std::stoi(Divisor)) == 0) {
      std::cout << "ERROR: " << "0" << "/" << "0" << " is undefined";
  } else {
  std::cout << round(std::stoi(Dividend)) << "/" << round(std::stoi(Divisor))
  << " = " << (std::stoi(Dividend)/std::stoi(Divisor)) << " Remainder " << 
  (std::stoi(Dividend)%std::stoi(Divisor));
  }
}