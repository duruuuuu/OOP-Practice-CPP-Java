#include "Player.h"
#include <string>
#include <vector>
#include <iostream>

void get_player_names(std::vector<Player> &team, int numOfPlayers, int teamNumber)
{
    std::string nameHolder;
    std::cout << "TEAM " << teamNumber << std::endl;
    for (int i = 0; i < numOfPlayers; i++) // TEAM ONE
    {
        std::cout << "Player " << i + 1 << " what is your name: ";
        std::cin >> nameHolder;
        team.at(i).set_name(nameHolder);
    }
}

void print_players(std::vector<Player> &team, int teamNumber)
{
    std::cout << "Team " << teamNumber << ":" << std::endl;
    std::cout << "1. " << team.at(0).get_name() << std::endl
              << "2. " << team.at(1).get_name() << std::endl;
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

    std::cout << "\nTEAM ONE DICE ROLL: \n"
              << team1_dice << std::endl;

    std::cout << "TEAM TWO DICE ROLL: \n"
              << team2_dice << std::endl;

    if (team1_dice > team2_dice)
        return 1;

    else
        return 2;
}