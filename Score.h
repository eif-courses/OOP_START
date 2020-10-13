//
// Created by Marius on 10/13/2020.
//

#ifndef OOP_START_SCORE_H
#define OOP_START_SCORE_H


#include "Team.h"

class Score {
private:
    Team t1;
    Team t2;
public:
    Score(const Team &t1, const Team &t2);
    int getScore(int teamNumber);

};


#endif //OOP_START_SCORE_H
