#include "../include/algorithm.h"

int main() {
  int a = doComputation(5, 7.0);
  int b = 5;
  int c = max(a, b);
  printf("Result: %d\n", c);
  logDebug('!');
  return 0;
}
