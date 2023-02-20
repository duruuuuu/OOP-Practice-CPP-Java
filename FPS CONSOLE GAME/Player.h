#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player
{
private:
    // attributes
    std::string name;
    int health{100};
    int bullets{7};

public:
    // constructors
    Player() {}
    Player(std::string n) { n = name; }

    // methods
    bool is_dead()
    {
        if (health == 0)
            return 1;
    }

    int attack_damage()
    {
        /* Function to randomly generate how much damage is done to the health of the other player */
        srand(time(0));

        // Generate a random number between 0 and 50
        int attack_point = rand() % 51;

        return attack_point;
    }

    int defense(int damage)
    {
        /* Function to defend player against attack */
        srand(time(0));

        // Generate a random number between 0 and the amount of damage from the attack
        int defense_point = rand() % damage;

        return defense_point;
    }

    void set_name(std::string n) { name = n; }
    std::string get_name() { return name; }
};

#endif //_PLAYER_H_