#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring empty;           // no-args constructor
    Mystring java("Java");    // overloaded constructor
    Mystring cPlusPlus(java); // copy constructor

    empty.display();
    java.display();
    cPlusPlus.display();

    return 0;
}