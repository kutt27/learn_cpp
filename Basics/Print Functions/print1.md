# Objective: 

## Print two hello world into the console

```c++
#include <iostream>

using namespace std;

int main(){
    std::cout << "Hello World!";
    std::cout << "Hello World!";

    return 0;
}
```

# Output

```
Hello World!Hello World!
```

### Printing into two lines using 'endl' object

```c++
#include <iostream>

using namespace std;

int main(){
    std::cout << "Hello World!" << endl;
    std::cout << "Hello World!";

    return 0;
}
```
### Output

```
Hello World!
Hello World!
```

# Important note

The C++ standard requires that the main function return an integer value. This is because the operating system expects the main function to return a status code. 

```c++
void main(){
    // this is wrong
}
```

Instead we have to return a status code, so we use 'int'

```c++
int main(){
    // This code is correct
    return 0;
}
```

The status code indicates whether the program terminated successfully or not. A status code of 0 indicates that the program terminated successfully. A status code of anything other than 0 indicates that the program terminated with an error.