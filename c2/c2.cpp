#include <iostream>
#include <bitset>

int main()
{
    std::cout << "Hello World! chapter 2.1\n";

    bool bVal = false;
    char chValue = 65;
    float fValue = 3.141592f;
    // copy intialziation
    double dValue = 3.141592;

    auto x = dValue;

    int a(123); // direct initialization
    int b{ 123 }; // uniform initialization


    int c(3.14); //warning; auto type coersion
    int d{ 4.5 }; // error more strict


}
