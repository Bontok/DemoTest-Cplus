#include <iostream>

int main() {
  
  double pesos, reais, soles;
  double dollars;

  std::cout << "Enter number of Colombian Pesos: \n";
  std::cin >> pesos;

  std::cout << "Enter number of Brasil Reais: \n";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: \n";
  std::cin >> soles;
  
// pesos : 0,00024
// reais : 0,19
// Soles : 0,26
  
  dollars = (0.0024 * pesos) + (0.19 * reais) + (0.26 * soles);

std::cout << "US Dollars = $" << dollars << "\n";

}