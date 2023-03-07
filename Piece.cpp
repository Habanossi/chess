#include "Piece.h"
#include <iostream>

using namespace std;

Piece::Piece(string n, int i, int p, int c){     // Constructor
    name = n;
    id = i;
    placement = p;
    colour = c;
    string c_str;
    if(c == 0) c_str = "White";
    else c_str = "Black";
    cout << "Initiating " + c_str + " " + name + " with id " + to_string(id) + " and placement " + to_string(placement) + ".\n";
}

int Piece::move(int new_placement){
	int o = placement;
    placement = new_placement;
    return o;
}