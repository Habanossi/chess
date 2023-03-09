#ifndef PIECE_H
#define PIECE_H
#include <iostream>

using namespace std;

class Piece {
    private:
        string name;
        int id;
		int pos;
        int colour;
    public:
		Piece(string n, int i, int p, int c);
		void move(int new_pos);
        void print();
        int getId();
        int getPos();
        int getColour();
        void setId(int id);
        void setPos(int pos);
        void setColour(int colour);
        string getName();
        void setName(string name);
};

#endif