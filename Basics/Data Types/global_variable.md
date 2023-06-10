## Global Variable

A global variable in C++ is a variable that is declared outside of any function or class. This means that it can be accessed from anywhere in the program. Global variables are often used to store data that needs to be accessible to multiple functions or classes.

#### Example in C++:

```c++
int global_variable = 10;
```
This variable can be accessed from anywhere in the program, such as:

```c++
void function1() {
  // Access the global variable
  int value = global_variable;
}

void function2() {
  // Access the global variable
  global_variable = 20;
  std::cout << global_variable ;
}
```

### Disadvantages

Global variables can be useful, but they can also be a source of problems. One problem is that they can make code less modular. When a variable is global, it can be accessed from anywhere in the program. This means that any function or class that needs to use the variable must know about it. This can make code harder to understand and maintain.

Another problem with global variables is that they can be shared between different functions or classes. This can lead to problems if two different parts of the program try to change the value of the variable at the same time. This can cause the program to crash or produce unexpected results.

For these reasons, it is generally best to avoid using global variables. If you do need to use a global variable, make sure to give it a meaningful name and document its purpose. You should also consider using encapsulation to protect the variable from being accessed by other parts of the program.