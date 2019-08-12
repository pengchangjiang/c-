#define BUILD_ADD_DLL

#include <iostream>
#include "add.h"

using namespace std;

int Add(int a, int b)
{
  int c;
  c = a + b;
  cout << a << "+" << b
       << "=" << c << endl;
  cout << "I'm new add" << endl;
  return c;
}

// g++ -shared -o add.so add.cpp

// g++ -L. -o addTest2 test.cpp add.dll