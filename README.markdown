
# Functional C++

A library for functional programming in C++, including support for immutable
algebraic data types.

## About

Functional C++ was initially developed for a [talk][] given at the [Brisbane
Functional Programming Group][BFPG]. Slides for the talk are available in the
`doc` directory.

[BFPG]: http://bfpg.org/events/58050552
[talk]: http://vimeo.com/41011774

The library is in the very early stages of development. For now, it just
contains a strict, boxed sum type, a strict, unboxed optional-value type, basic
pattern-matching, and some simple examples.

In time, I hope to include better pattern matching, lazy evaluation, a
selection of [immutable data structures][PFDS], useful higher-order
abstractions, [QuickCheck][]-style testing, and documentation.

[PFDS]: http://www.cambridge.org/9780521663502
[QuickCheck]: http://hackage.haskell.org/package/QuickCheck

## Requirements

Functional C++ is a [C++11][] library, so you'll need a recent C++ compiler,
building in C++11 mode. I am using [GCC][] [4.7.0][], with `g++ -std=c++11`.
There are no library dependencies other than the C++11 standard library.

[C++11]: http://en.wikipedia.org/wiki/C++11
[GCC]: http://gcc.gnu.org/
[4.7.0]: http://gcc.gnu.org/gcc-4.7/

Currently, it is an include-only library, so you just need to ensure your
compiler can find the files in the `include` directory.

## License

Copyright &copy; Matthew Brecknell 2012. Distributed under the Boost Software
License, Version 1.0. (See accompanying file `LICENSE.txt` or a copy at
[boost.org][boost-license].)

[boost-license]: http://www.boost.org/LICENSE_1_0.txt

