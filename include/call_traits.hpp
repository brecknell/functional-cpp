
// Copyright (c) Matthew Brecknell 2012.
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE.txt or a copy at http://www.boost.org/LICENSE_1_0.txt).

#include <type_traits>

// Static test whether a type is callable with given argument types.

template <typename> struct is_callable;

template <typename Fun, typename... Args>
class is_callable <Fun(Args...)> {

  template <typename F> static char
    test(decltype(std::declval<F>()(std::declval<Args>()...)) *);

  template <typename F> static void test(...);

public:

  typedef bool value_type;
  typedef is_callable type;

  static const bool value
    = std::is_same<char,decltype(test<Fun>(nullptr))>::value;

  constexpr operator value_type() const { return value; }

};

// Determine result type of a funciton call, if arguments are compatible.

template <typename Call, typename Enable = void>
struct result_of;

template <typename Fun, typename... Args>
struct result_of
  <
    Fun(Args...),
    typename std::enable_if<is_callable<Fun(Args...)>::value>::type
  >
  : std::result_of<Fun(Args...)> {};

template <typename Fun, typename... Args>
struct result_of
  <
    Fun(Args...),
    typename std::enable_if<!is_callable<Fun(Args...)>::value>::type
  >
  {};

