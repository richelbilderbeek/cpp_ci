#include <cassert>
#include <iostream>

void test()
{
  assert(1 + 1 == 2);
}

int main()
{
  #ifndef NDEBUG
  std::cout << "Debug mode\n";
  test();
  #else
  assert(1 == 2); //false, but must be removed in release mode
  std::cout << "Release mode\n";
  #endif
}
