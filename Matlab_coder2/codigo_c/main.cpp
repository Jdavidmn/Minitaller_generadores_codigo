#include <iostream>
#include "fibonacci_series.h"

int main () {

  int n = 10;

  coder::array<double, 2U> fib_values;
  
  fibonacci_series(n, fib_values);

  double *fib_ptr = &fib_values[0];

  std::cout << "Primeros " << n << " términos de la serie de fibonacci" << ": ";
  
  for (; fib_ptr < &fib_values[0] + n; ++fib_ptr) {
    std::cout << " " << *fib_ptr;
  }

  std::cout << std::endl;

  return 0;
}
