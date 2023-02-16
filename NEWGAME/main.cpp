#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
private:
    // attributes
    string name;
    int health{100};
    int bullets{7};

public:
    // methods
    void talk(string);
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

    void set_name(string n) { name = n; }
    string get_name() { return name; }
};

void get_player_names(vector<Player> &team, int numOfPlayers, int teamNumber);
void print_players(vector<Player> &team, int teamNumber);
int roll_dice();
int print_roll_dice();

int main()
{
    Player one;
    Player two;
    Player three;
    Player four;
    vector<Player> team_one{one, two};
    vector<Player> team_two{three, four};

    get_player_names(team_one, 2, 1);
    get_player_names(team_two, 2, 2);

    cout << "\nHere are your teams: " << endl;
    print_players(team_one, 1);
    print_players(team_two, 2);

    cout << "\nEach team must roll the dice to decide who goes first.\n"
         << endl;

    int goes_first = print_roll_dice();

    /* THE GAME STARTS HERE */

    return 0;
}

void get_player_names(vector<Player> &team, int numOfPlayers, int teamNumber)
{
    string nameHolder;
    cout << "TEAM " << teamNumber << endl;
    for (int i = 0; i < numOfPlayers; i++) // TEAM ONE
    {
        cout << "Player " << i + 1 << " what is your name: ";
        cin >> nameHolder;
        team.at(i).set_name(nameHolder);
    }
}

void print_players(vector<Player> &team, int teamNumber)
{
    cout << "Team " << teamNumber << ":" << endl;
    cout << "1. " << team.at(0).get_name() << endl
         << "2. " << team.at(1).get_name() << endl;
}

int roll_dice()
{
    srand(time(0));

    // Generate a random number between 0 and 50
    int dice = rand() % 13;

    return dice;
}

int print_roll_dice()
{
    // This function decides who goes first in the game and returns the teams number.
    int team1_dice = roll_dice(), team2_dice = roll_dice();

    cout << "\nTEAM ONE DICE ROLL: \n"
         << team1_dice << endl;

    cout << "TEAM TWO DICE ROLL: \n"
         << team2_dice << endl;

    if (team1_dice > team2_dice)
        return 1;

    else
        return 2;
}