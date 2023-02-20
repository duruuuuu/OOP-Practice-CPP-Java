#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
    char *str;

public:
    Mystring();                       // No-args constructor
    Mystring(const char *s);          // Overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    ~Mystring();                      // destructor

    void display() const;

    // getters
    int get_length() const;
    const char *get_str() const;
};

#endif //_MYSTRING_H_