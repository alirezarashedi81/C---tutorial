#include <iostream>

namespace first{
    int a = 10;
}

namespace second{
    int a = 20;
}

int main(){
    int a = 5;
    std::cout << "local a + 5 = " << a + 5 << std::endl;

//  a = a + 1
    first::a += 2;
    std::cout << "first::a + 2 = " << first::a << std::endl;

// this is usefull in loops
    second::a++;
    std::cout << "second::a ++ = " << second::a << std::endl;

// same thing with minus
    first::a -= 2;
    std::cout << "first::a -= 2 = " << first::a << std::endl;

    second::a--;
    std::cout << "second::a -- = " << second::a << std::endl;

// same thing with multiplication and division
    first::a *= 3;
    std::cout << "first::a *= 3 = " << first::a << std::endl;

    second::a /= 2;
    std::cout << "second::a /= 2 = " << second::a << std::endl;

// modulo operator
    int x = 10;
    x %= 3;
    std::cout << "x %= 3 = " << x << std::endl;
}