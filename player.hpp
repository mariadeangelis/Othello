#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <iostream>
#include <vector>
#include "common.hpp"
#include "board.hpp"
using namespace std;

class Player {

public:
    Player(Side side);
    ~Player();

    Move *doMove(Move *opponentsMove, int msLeft);
    int evaluate(Move *move);
    bool adjacent_to_corner(Move *move);

    // Flag to tell if the player is running within the test_minimax context
    bool testingMinimax;
protected:
	Side side_other;
	Side my_side;
	Board board;
};

#endif
