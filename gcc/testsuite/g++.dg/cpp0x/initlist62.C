// PR c++/51399
// { dg-options "-std=c++0x" }

#include <initializer_list>

struct A
{
  std::initializer_list<int> x[1] = { 0 };  // { dg-error "could not convert" }
  A() {}
};
