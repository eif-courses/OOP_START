//
// Created by Marius on 10/6/2020.
//

#ifndef OOP_START_MATCH_H
#define OOP_START_MATCH_H


#include <string>
#include "Team.h"
#include "Score.h"

class Match {
private:
    std::string matchType;
    Team team1;
    Team team2;
    Score score;
public:

    Match(const std::string &matchType, const Team &team1, const Team &team2, const Score &score);

    void start();

    void simulator(Team team, int teamSize, Ball ball);

    void winner(Team team);
};


#endif //OOP_START_MATCH_H
