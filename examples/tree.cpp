
#include <iostream>
#include <string>
#include "../include/tree.hpp"

typedef tree<int> tri;

int main() {

  tri foo = tri(tri(tri(1), 2, tri(3)), 4, tri(tri(5), 6, tri()));
  tri bar = insert(7, foo);

  for (const tri & tr: {foo,bar}) {
    std::cout << tr << std::endl;
  }

  for (const tri & tr: {foo,bar}) {
    std::cout
      << map_tree<int*>([](int & i) { return &i; }, tr)
      << std::endl;
  }

}

