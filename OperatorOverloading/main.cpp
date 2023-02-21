#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring a{"Hello"}; // pverloaded constrctor
    Mystring b;          // no-args constructor
    b = a;               // copy assignment

    b = "This is a test";

    Mystring a = Mystring{"Hola"};
    a = "Bonjour";

    /*Mystring empty;           // no-args constructor
    Mystring java("Java");    // overloaded constructor
    Mystring cPlusPlus(java); // copy constructor

    empty.display();
    java.display();
    cPlusPlus.display();*/

    return 0;
}