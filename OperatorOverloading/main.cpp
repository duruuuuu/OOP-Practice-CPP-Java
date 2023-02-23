#include <iostream>
#include "Mystring.h"

using namespace std;

struct Vector2
{
    float x, y;

    Vector2(float x, float y)
        : x(x), y(y) {}

    Vector2 operator+(const Vector2 &other) const
    {
        return Vector2(x + other.x, y + other.y);
    }
};

ostream &operator<<(ostream &stream, const Vector2 &other)
{
    stream << other.x << ", " << other.y;
    return stream;
}

int main()
{
    ////////////* Mystring functions *//////////////
    Mystring a{"Hello"}; // pverloaded constrctor
    Mystring b;          // no-args constructor
    b = a;               // copy assignment

    b = "This is a test";

    Mystring a = Mystring{"Hola"};
    a = "Bonjour";

    Mystring empty;           // no-args constructor
    Mystring java("Java");    // overloaded constructor
    Mystring cPlusPlus(java); // copy constructor

    empty.display();
    java.display();
    cPlusPlus.display();

    //////////////////* Vector2 Struct functions *///////////////////////

    Vector2 position(4.0f, 4.0f);
    Vector2 speed(0.5f, 1.5f);

    Vector2 result = position + speed;
    cout << "x: " << result << endl;

    return 0;
}