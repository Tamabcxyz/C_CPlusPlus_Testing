#include "LibraryCode.hpp"
#include <cmath> //sqrt
#include <iostream>
#include <stdexcept>

double mySqrt(double input) {
  if (input < 0) {
    std::cout << "Exception thrown\n";
    throw std::runtime_error("Negative argument");
  }
  std::cout << "No exception thrown\n";
  return sqrt(input);
}
