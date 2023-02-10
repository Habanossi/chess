#ifndef PIECE_H
#define PIECE_H
#include <iostream>

using namespace std;

class Piece {
    public:
        string name;
        int id;
		int placement;
		Piece(string n, int i, int p);
		int move(int new_placement);
};

#endif