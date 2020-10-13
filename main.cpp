#include <iostream>
#include "Player.h"
#include "Team.h"
#include "Score.h"
#include "Match.h"
#include <vector>
using namespace std;
int main() {

    Team rytas("Rytas");
    Team zalgiris("Zalgiris");
    rytas.generateTeam();
    zalgiris.generateTeam();

    Score score(rytas, zalgiris);

    Match match("5v5", rytas, zalgiris, score);

    match.start();












    for(auto member: rytas.getPlayers()){
        cout << member.getName() << endl;
    }



    return 0;
}
