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
    bool is_dead();
    int attack();
    void set_name(string n) { name = n; }
    string get_name() { return name; }
};

void get_player_names(vector<Player> &team, int numOfPlayers);

int main()
{
    Player one;
    Player two;
    Player three;
    Player four;
    vector<Player> team_one{one, two};
    vector<Player> team_two{three, four};

    get_player_names(team_one, 2);
    get_player_names(team_two, 2);

    cout << "Here are your teams: " << endl;
    cout << "Team one: " << endl;
    cout << "1. " << team_one.at(0).get_name() << endl
         << "2. " << team_one.at(1).get_name() << endl;

    cout << "Team two: " << endl;
    cout << "1. " << team_two.at(0).get_name() << endl
         << "2. " << team_two.at(1).get_name() << endl;

    return 0;
}

void get_player_names(vector<Player> &team, int numOfPlayers)
{
    string nameHolder;
    for (int i = 0; i < numOfPlayers; i++) // TEAM ONE
    {
        cout << "Player " << i + 1 << " what is your name: ";
        cin >> nameHolder;
        team.at(i).set_name(nameHolder);
    }
}