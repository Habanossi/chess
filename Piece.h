#ifndef PIECE_H
#define PIECE_H
#include <iostream>

using namespace std;

class Piece {
    public:
        string name;
        int id;
		int placement;
        int colour;
		Piece(string n, int i, int p, int c);
		int move(int new_placement);
        //int getId();
        //int getPlacement();
        //int getColour();
};

#endif