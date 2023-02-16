#include <iostream>
#include <string>
#include <vector>
#include "Player.h"

using namespace std;

void get_player_names(std::vector<Player> &team, int numOfPlayers, int teamNumber);
void print_players(std::vector<Player> &team, int teamNumber);
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