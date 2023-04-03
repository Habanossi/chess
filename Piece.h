#ifndef PIECE_H
#define PIECE_H
#include <iostream>

using namespace std;

class Piece {
    private:
        string name;
        int id;
		int pos;
    public:
		Piece(string n, int i, int p);
        //~Piece() { cout << "\n destruction lul \n"; };
		void move(int new_pos);
        void print();
        int getId();
        int getPos();
        void setId(int id);
        void setPos(int pos);
        string getName();
        void setName(string name);
};

#endif