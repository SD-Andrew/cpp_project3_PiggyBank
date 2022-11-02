#include <iostream>

int main() {
  
  double pesos;
  double reais;
  double soles;
  double dollars;

  //exchange rate 1.00 Colombian Peso = 0.00023033826 US Dollars
  std::cout << "Enter number of Colubian Pesos: ";
  std::cin >> pesos;

  //exchange rate 1.00 Brazilian Real = 0.19366801 US Dollars
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  //exchange rate 1.00 Peruvian Sol = 0.26034484 US Dollars
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  dollars = (0.00023033826 * pesos) + (0.19366801 * reais) + (0.26034484 * soles);

  std::cout << "US Dollars = $" << dollars <<"\n";

}