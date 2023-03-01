#include "Movie.h"
#include <iostream>
#include <string>

// Implementation of the constructor
Movie::Movie(std::string name, std::string rating, long int numberOfWatches)
    : name(name), rating(rating), numberOfWatches(numberOfWatches)
{
}

// Implementation of copy constructor
Movie::Movie(const Movie &source)
    : Movie{source.name, source.rating, source.numberOfWatches}
{
}

// Implementation of Destructor
Movie::~Movie() {}

// Implementation of display method
void Movie::display() const
{
}