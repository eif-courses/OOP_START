//
// Created by Marius on 10/6/2020.
//

#include <algorithm>
#include "Team.h"

Team::Team(const std::string &name) : name(name) {}

Team::Team(const std::string &name, const std::vector<Player> &players) : name(name), players(players) {}

const std::string &Team::getName() const {
    return name;
}

const std::vector<Player> &Team::getPlayers() const {
    return players;
}

void Team::addTeamMember(Player p) {
    players.push_back(p);
}

void Team::generateTeam() {

    Ball ball{};
    ball.setIsTaken(false);

    Player sabonis(45, 2.32, "Arvydas",0, ball);
    Player kurtinaitis(15, 1.32, "Rimas", 0, ball);
    Player jomantas(35, 2.32, "Jomantas", 0, ball);
    Player jasikevicius(32, 1.82, "Saras", 0, ball);
    Player kobe(48, 2.12, "Bryant",0, ball);

    players.push_back(sabonis);
    players.push_back(kurtinaitis);
    players.push_back(jomantas);
    players.push_back(jasikevicius);
    players.push_back(kobe);

    for(auto member: players){
        member.setBall(ball);
    }



}

void Team::changeStateOfBall(Player p, int index) {
    for (auto member: players){
        if(member.getName() == p.getName()){
            players[index] = p;
        }

    }
}
