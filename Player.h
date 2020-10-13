//
// Created by Marius on 10/6/2020.
//
#include <iostream>
#include "Ball.h"

#ifndef OOP_START_PLAYER_H
#define OOP_START_PLAYER_H


class Player {
private:
    int age;
    double height;
    std::string name;
    int points;
    Ball ball;
public:

    Player(int age, double height, const std::string &name, int points, const Ball &ball);


    const Ball &getBall() const;

    void setBall(const Ball &ball);


    void setPoints(int points);

    int getPoints() const;

    void setAge(int age);
    int getAge();
    double getHeight();
    std::string getName();
};


#endif //OOP_START_PLAYER_H
