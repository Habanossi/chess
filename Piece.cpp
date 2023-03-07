#include "Piece.h"
#include <iostream>

using namespace std;

Piece::Piece(string n, int i, int p, int c){     // Constructor
    name = n;
    id = i;
    placement = p;
    colour = c;
    cout << "Initiating " + to_string(colour) + " " + name + " with id " + to_string(id) + " and placement " + to_string(placement) + ".\n";
}

int Piece::move(int new_placement){
	int o = placement;
    placement = new_placement;
    return o;
}