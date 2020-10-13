//
// Created by Marius on 10/6/2020.
//
#include <iostream>
#include <vector>
#include "Player.h"
#ifndef OOP_START_TEAM_H
#define OOP_START_TEAM_H


class Team {
private:
    std::string name;
    std::vector<Player> players;
public:
    Team(const std::string &name);
    Team(const std::string &name, const std::vector<Player> &players);
    const std::string &getName() const;
    const std::vector<Player> &getPlayers() const;
    void addTeamMember(Player p);
    void generateTeam();
    void changeStateOfBall(Player p, int index);
};


#endif //OOP_START_TEAM_H
