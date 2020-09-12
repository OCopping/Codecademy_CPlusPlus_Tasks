#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num) {

  std::vector<int> nums;
  nums.push_back(num);
  nums.push_back(num*2);
  nums.push_back(num*3);
  return nums;

}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}