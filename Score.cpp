//
// Created by Marius on 10/13/2020.
//

#include "Score.h"

int Score::getScore(int teamNumber) {

    if(teamNumber == 0){
        int s = 0;
        for(auto item: t1.getPlayers()){
            s+= item.getPoints();
        }
        return s;
    }else{
        int d = 0;
        for(auto item: t2.getPlayers()){
            d+= item.getPoints();
        }
        return d;
    }
}

Score::Score(const Team &t1, const Team &t2) : t1(t1), t2(t2) {}
