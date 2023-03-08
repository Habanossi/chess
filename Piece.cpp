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

void Piece::move(int new_placement){
    placement = new_placement;
}

void Piece::print(){
    std::cout << name << " with id " << id << " is in " << placement << "\n";
}

int Piece::getPlacement(){
    return placement;
}