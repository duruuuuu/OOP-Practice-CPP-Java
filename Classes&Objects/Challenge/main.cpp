#include "Movies.h"
#include "Movie.h"
#include <string>
#include <iostream>

void add_movie(Movies &movieGroup, std::string name, std::string rating, long int watchAmount)
{
    if (movieGroup.add_movie(name, rating, watchAmount))
    {
        std::cout << name << "Added" << std::endl;
    }
}

int main()
{
    Movies my_movies;

    my_movies.display();

    add_movie(my_movies, "The Holiday", "PG-13", 7);
    add_movie(my_movies, "The Ugly Truth", "R", 1);
    add_movie(my_movies, "21 Dresses", "PG-13", 3);

    my_movies.display();

    return 0;
}