//
// Created by Marius on 10/6/2020.
//

#include "Player.h"

double Player::getHeight() {
    return height;
}
int Player::getAge() {
    return age;
}
std::string Player::getName(){
    return name;
}
void Player::setAge(int age) {
    Player::age = age;
}

void Player::setPoints(int points) {
    Player::points = points;
}

int Player::getPoints() const {
    return points;
}

const Ball &Player::getBall() const {
    return ball;
}

void Player::setBall(const Ball &ball) {
    Player::ball = ball;
}

Player::Player(int age, double height, const std::string &name, int points, const Ball &ball) : age(age),
                                                                                                height(height),
                                                                                                name(name),
                                                                                                points(points),
                                                                                                ball(ball) {}




