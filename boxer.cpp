#include <iostream>

int main() {
  double weightB;
  int planetF;

std::cout << "Hi Boy, what is your wheigt on earth\n";
std::cin >> weightB;



std::cout << "Champion, which planet are you going to fight now?\n";
std::cout << "1-Mercury\n";
std::cout << "2-Venus\n";
std::cout << "3-Mars\n";
std::cout << "4-Jupiter\n";
std::cout << "5-Saturn\n";
std::cout << "6-Uranus\n";
std::cout << "7-Neptune\n";
std::cin >> planetF;
  
switch (planetF){
  case 1:
  std::cout << weightB * 0.38;
  break;
  case 2:
  std::cout << weightB  * 0.91;
  break;
  case 3:
  std::cout << weightB  * 0.38;
  break;
  case 4:
  std::cout << weightB  * 2.479;
  break;
  case 5:
  std::cout << weightB * 1.06;
  break;
  case 6:
  std::cout << weightB * 0.92;
  break;
  case 7:
  std::cout << weightB * 1.19;
  break;

}
  
  
  
  
  
  
  
  
  
}