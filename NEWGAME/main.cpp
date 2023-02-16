#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
private:
    // attributes
    string name;
    int health{5};
    int bullets{7};

public:
    // methods
    void talk(string);
    bool is_dead()
    {
        if (health == 0)
            return 1;
    }
    bool attack();
    int attack_damage();
    void set_name(string n) { name = n; }
    string get_name() { return name; }
};

void get_player_names(vector<Player> &team, int numOfPlayers, int teamNumber);
void print_players(vector<Player> &team, int teamNumber);

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