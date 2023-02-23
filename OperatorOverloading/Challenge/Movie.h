#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie
{
    friend class Movies;

private:
    std::string name;
    std::string rating;
    long int numberOfWatches;
};

#endif // _MOVIE_H_