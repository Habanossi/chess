#include "Piece.h"
#include <iostream>

using namespace std;

Piece::Piece(string n, int i, int p){     // Constructor
    name = n;
    id = i;
    placement = p;
    cout << "Initiating " + name + " with id " + to_string(id) + " and placement " + to_string(placement) + ".\n";
}

int Piece::move(int new_placement){
	int o = placement;
    placement = new_placement;
    return o;
}