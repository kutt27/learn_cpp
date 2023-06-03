# Printing Hello World in C++

## Overview

In C++, a "Hello World" program is a very simple program that prints the text "Hello, World!" to the console. It is a common first program for beginning C++ programmers to write.

## Code

The following code is an example of a "Hello World" program in C++:

```c++
#include <iostream>

using namespace std;

int main() {
  cout << "Hello, World!";
  return 0;
}
```

## Explanation

The first line of code, `#include <iostream>`, tells the compiler to include the `iostream` header file. This header file contains declarations for the `cout` object, which is used to print output to the console.

The second line of code, `using namespace std;`, tells the compiler to use the `std` namespace. This namespace contains all of the standard C++ library functions, including `cout`.

The third line of code, `int main()`, declares the `main()` function. This is the entry point for all C++ programs.

The fourth line of code, `cout << "Hello, World!;"`, prints the text "Hello, World!" to the console. The `cout` object is used to print output to the console. The << operator is the stream insertion operator, which is used to insert data into a stream object.

The fifth line of code, `return 0;`, returns the value 0 from the `main()` function. This indicates that the program has exited successfully.

## Output

When this program is compiled and run, it will print the following output to the console:

```
Hello, World!
```