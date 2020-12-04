//============================================================================
// Name        : main.cpp
// Author      : Tobias Wilfert
//============================================================================

#include <iostream>

/// Test comment to see if Doxygen is generated
int foo(){
  return 42;
}

/**
 * This comment is to check that doxygen, works
 */
int main() {
  std::cout << "Hello, World!" << foo() << std::endl;
  return 0;
}