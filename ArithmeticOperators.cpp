#include <iostream>

namespace first{
    int a = 10;
}

namespace second{
    int a = 20;
}

int main(){
    int a = 5;
    std::cout << "10 + 5 = " << a + 5 << std::endl;

//  a = a + 1
    first::a += 1;
    std::cout << "first::a = " << first::a << std::endl;

// this is usefull in loops
    second::a++;
    std::cout << "second::a = " << second::a << std::endl;
}