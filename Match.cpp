//
// Created by Marius on 10/6/2020.
//

#include <ctime>
#include "Match.h"
using namespace std;
Match::Match(const std::string &matchType, const Team &team1, const Team &team2, const Score &score) : matchType(
        matchType), team1(team1), team2(team2), score(score) {
    srand (time(NULL));
}

void Match::start() {

    Ball ball{};
    ball.setIsTaken(true);

    int number = 0;
    number = rand() % 10 + 1;

    cout << "Match begins!" << endl;
    if(number < 5){

        simulator(team1, team1.getPlayers().size(), ball);

    }else{
        simulator(team2, team2.getPlayers().size(), ball);

    }

    for (auto member: team1.getPlayers()){
        cout << member.getName()<<": " << member.getBall().isTaken1() << endl;
    }
    cout << "====================================================================" << endl;

    for (auto member: team2.getPlayers()){
        cout << member.getName()<<": " << member.getBall().isTaken1() << endl;
    }








}

void Match::simulator(Team team, int teamSize, Ball ball) {
    cout << team.getName() << " team get a ball!" << endl;
    int number = 0;
    number = rand() % teamSize;

    Player p = team.getPlayers()[number];
    cout << "ATKOVOJO KAMUOLY:" << p.getName()<< endl;

    ball.setIsTaken(true);
    p.setBall(ball);

    team.changeStateOfBall(p, number);

    winner(team);
}

void Match::winner(Team team) {
    for (int i = 0; i < team.getPlayers().size();i++) {
        if(team.getPlayers()[i].getBall().isTaken1()){
            cout << team.getName() << " WINS!!!" << endl;
        }
    }
}
