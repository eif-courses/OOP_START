//
// Created by Marius on 10/13/2020.
//

#ifndef OOP_START_BALL_H
#define OOP_START_BALL_H


class Ball {
private:
    bool isTaken;
public:
    bool throwBall();
    void passBall();

    void setIsTaken(bool isTaken);

    bool isTaken1() const;
};


#endif //OOP_START_BALL_H
