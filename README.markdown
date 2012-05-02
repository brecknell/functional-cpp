
# Functional C++

A library for functional programming in C++, including support for immutable
algebraic data types.

## About

Functional C++ was initially developed for a [talk][] given at the [Brisbane
Functional Programming Group][BFPG]. Slides for the talk are available in the
doc directory.

[BFPG]: http://bfpg.org/events/58050552
[talk]: http://vimeo.com/41011774

For now, the library contains a strict, boxed sum type, a strict, unboxed
optional-value type, basic pattern-matching, and some simple examples.

In time, I hope to include better pattern matching, lazy evaluation, a
selection of immutable data structures, useful higher-order abstractions,
[QuickCheck][]-style testing, and documentation.

[QuickCheck]: http://hackage.haskell.org/package/QuickCheck

## Requirements

This is a C++11 library, so you'll need a recent C++ compiler, building in
C++11 mode. I am using GCC 4.7.0.

Currently, it is an include-only library, so you just need to ensure your
compiler can find the files in the include directory.

## License

Copyright &copy; Matthew Brecknell 2012. Distributed under the Boost Software
License, Version 1.0. (See accompanying file LICENSE.txt or a copy at
[boost.org][boost-license]).

[boost-license]: http://www.boost.org/LICENSE_1_0.txt

