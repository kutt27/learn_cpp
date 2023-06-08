#include <iostream>

int main(){
    // INITIALIZING VARIABLES AND OPERATOR
    float a, b;
    char operation;
    float result;

    // TAKE THE OPERATION
    std::cout << "ENTER THE OPERATION: ( +  -  *  / ): ";
    std::cin >> operation;

    //TAKE THE FIRST NUMBER
    std::cout << "ENTER THE FIRST NUMBER: ";
    std::cin >> a;

    // TAKE THE SECOND NUMBER
    std::cout << "ENTER THE SECOND NUMBER: ";
    std::cin >> b;

    // COMPLETING THE OPERATION

    // ADDITION
    if(operation == '+'){
        result = a + b;
    }
    // SUBSTRACTION
    else if(operation == '-'){
        result = a - b;
    }
    // MULTIPLICATION
    else if(operation == '*'){
        result = a * b;
    }
    // SUBSTRACTION
    else if(operation == '/'){
        result = a / b;
    }
    // NO IDENTICAL OPERATION IS SELECTED
    else{
        std::cout << "INVALID OPERATION: " << std::endl;
    }

    // PRINT THE RESULT
    std::cout << "The result of the operation " << a << operation << b << " is " << result;

    return 0;
}