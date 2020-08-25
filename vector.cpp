#include <iostream>
#include <stdio.h>
#include <vector>

int main() {

  std::vector<int> nums = {2, 4, 3, 6, 1, 9};

  double sum_even = 0.0;
  double prod_odd = 1.0;

  for (int i=0; i < nums.size(); i++) {
    if ( nums[i] % 2 == 0) {
      sum_even = sum_even + nums[i];
    }
    else {
      prod_odd = prod_odd * nums[i];
    };
  };

  std::cout << "Sum of even numbers = " << sum_even << "\n";
  std::cout << "Product of odd numbers = " << prod_odd << "\n";

}