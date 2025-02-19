#include <vector>
#include <iostream>
#include <stdexcept>

int main() {
  std::vector<bool> vec(10);
  int i = 15;

  try {
    if (i < 0 || i >= vec.size()) {
      throw std::out_of_range("Index out of range");
    }
    bool b = vec[i];
    std::cout << "Value at index " << i << ": " << b << std::endl;
  } catch (const std::out_of_range& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  return 0;
}
