#include <iostream>

int main() {
  
  double earth_weight;
  int planet;
  double new_weight;

  std::cout << "What is your Earth weight?\n";

  std::cin >> earth_weight;

  std::cout << "What planet do you want to fight on?\n";

  std::cin >> planet;

  switch (planet) {

    case 1:
      new_weight = earth_weight * 0.78;
      break;
    case 2:
      new_weight = earth_weight * 0.39;
      break;
    case 3:
      new_weight = earth_weight * 2.65;
      break;
    case 4:
      new_weight = earth_weight * 1.17;
      break;
  };
  
  std::cout << "Your new weight is: " << new_weight;
  
  
  
  
}