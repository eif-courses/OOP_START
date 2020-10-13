//
// Created by Marius on 10/13/2020.
//


#include <ctime>
#include <cstdlib>
#include "Ball.h"

bool Ball::throwBall() {

    srand (time(NULL));
    int number = 0;
    number = rand() % 10 + 1;
    if(number < 5){
        return true;
    } else{
        return false;
    }

}

bool Ball::isTaken1() const {
    return isTaken;
}

void Ball::setIsTaken(bool isTaken) {
    Ball::isTaken = isTaken;
}
