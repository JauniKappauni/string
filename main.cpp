#include "string.h"
#include <iostream>

int main()
{
    /*
    string a;
    string b("Hello world!");

    std::cout << "a: " << a.c_str() << " (" << a.size() << ")\n";
    std::cout << "b: " << b.c_str() << " (" << b.size() << ")\n";
    */
   string b("Hello world!");
   std::cout << b.c_str() << "\n";
   b[0] = 'J';
   std::cout << b.c_str() << "\n";
   char c = b[1];
   std::cout << c << "\n";
}