### ## Exercise

Write a program that prints the numbers from 1 to 10, but skips the number 7.

```c++
#include <iostream>

int main(){
    int n = 10;
    for(int i = 1; i <= n; i++){
        if(i != 7){
            std::cout << i << std::endl;
        }
        else{
            continue;
        }
    }
    return 0;
}
```