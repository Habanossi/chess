#ifndef BOARD_H
#define BOARD_H
#include <iostream>

using namespace std;

class Board {
    public:
        int board[8][8];
		Board(){
            //int board[8][8] = {};
            std::fill(board[0], board[0] + 8 * 8, 0);
        };
		void print();
        void change_state(int id, int placement);
};

#endif