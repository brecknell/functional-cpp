
#include <iostream>
#include <string>
#include "../include/strict.hpp"

// data MySum = One Int | Two String

struct one { int int_val; };
struct two { std::string string_val; };

typedef strict::sum<one,two> mysum;

int main() {
  mysum foo = one{21};
  mysum bar = two{"Boo!"};
  mysum baz = bar;

  for (const mysum &i: {foo, bar, baz}) {
    std:: cout
      << i.match <std::string> (
        [](one & x) { return "Got one! " + std::to_string(x.int_val); },
        [](two & y) { return "Got two! " + y.string_val; },
        []() { return "Default!"; },
        99
      )
      << std::endl;
  }
}

