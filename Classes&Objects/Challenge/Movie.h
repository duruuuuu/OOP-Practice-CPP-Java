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

public:
    // Constructor
    Movie(std::string name, std::string rating, long int numberOfWatches);

    // Destructor
    ~Movie();

    // Basic getter and setter functions for private attributes

    void set_name(std::string name) { this->name = name; }
    std::string get_name() const { return name; }

    void set_rating(std::string rating) { this->rating = rating; }
    std::string get_rating() const { return rating; }

    void set_watched(long int n) { numberOfWatches = n; }
    long int get_watches() const { return numberOfWatches; }

    // Incrementing number of watches of a movie
    void increment_watch() { ++numberOfWatches; }

    void display() const;
};

#endif // _MOVIE_H_