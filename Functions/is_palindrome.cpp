#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {

  int n = text.length();
  std::string rev_text = text;

  for (int i = 0; i < n / 2; i++) 
    std::swap(rev_text[i], rev_text[n - i - 1]);

  if (text == rev_text) {
    return true;
  }
  else {
    return false;
  }

}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}