# C++ Repository Template

The purpose of this repository is to be a basic sample of C++ code with minimum requirement and a set of mandatory features for code quality and readability :
- Build management [CMake]
- Dependancies management [Conan]
- Tests [GTest]
- Documentation [Doxygen]
- Code formating [Clang-Format]
- Changelog [KeepAChangeLog]

This repository has been created with the best of my current knowledge. That does mean it is not perfect and I may realise in a near future that some of its content must be updated. However, my feeling is that it can be an easy way of starting to develop C++ quality code.

## Build

When you want to build a C++ application, you seeminlgly have choices:
- Write your own makefiles : this is for experts only
- Use an IDE dedicated tool (.pro, .vcxproj ...) but then you are stuck with an IDE
- Use [CMake]

But in fact [CMake] is *the* building tool, and has become a kind of standard for building C++ applications.

## Dependancies

Coding in C++ often means you'll spend more time managing dependancies and os configuration than actually coding. Here [Conan] can help you. You can find conan recipe for nearly every imaginable component, and once you have your conan file written and working, you'll find it easy to add new dependancies.
In this repository, the conan file is 2.0 ready (no *from Conans import*) which is not the case of most samples I found in the web so far.

## Test

If you ever wish to write good code, you have to test it with automatic tests. To this end, [GTest] is a good library, with a lot of usefull features for writting your tests.

## Documentation

A good code has a code documentation. Even if you try to write your code with the best function names and the best patterns, there will always come a time when you will not understand what you wrote earlier. Keeping a documentation in your header files will allow even others taking after you to understand what you wrote. And how best to display the documentation than by using the most used tool : [Doxygen]

## Code formating

Should spaces be used or tabs? How many for indentations? Where do I put the braces?
All those questions should not even have to be asked in a C++ project. Whatever rules you choose, they should be enforced by an automatic formatting! Allowing you to focus on content and not style, and making it easy for anyone who reads, since all the code will be written in the same manner accross your application. To this end, [Clang-Format] has all the options you need, and is well integrated in any good IDE.

## Changelog

Keeping a good changelog is important in any program, so [KeepAChangeLog]!

## Other choices

| Choice                                               | Why?                                      |
| ---------------------------------------------------- | ----------------------------------------- |
| Lower-case folder and source names                   | never be surprised by a missing uppercase |
| snake_case functions                                 | this is a standard                        |
| *inc* folder for exposed .h                          | ease readability of the project           |
| *impl* folder for implementation and non-exposed .h  | ease readability of the project           |
| one folder per component                             | ease readability of the project           |



[CMake]: https://cmake.org/
[Conan]: https://conan.io/
[GTest]: https://github.com/google/googletest
[Doxygen]: https://www.doxygen.nl/
[KeepAChangeLog]: https://keepachangelog.com/en/1.0.0/
[Clang-Format]: https://clang.llvm.org/docs/ClangFormat.html