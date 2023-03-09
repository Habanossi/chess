#include "Piece.h"
#include <iostream>

using namespace std;

Piece::Piece(string n, int i, int p, int c){     // Constructor
    setName(n);
    setId(i);
    setPos(p);
    setColour(c);
    cout << "Initiating ";
    print();
}

void Piece::move(int new_pos){
    pos = new_pos;
}

void Piece::print(){
    std::cout << name << " with id " << id << " to " << pos << "\n";
}

int Piece::getId(){
    return id;
}

int Piece::getPos(){
    return pos;
}

int Piece::getColour(){
    return colour;
}

void Piece::setId(int i){
    id = i;
}

void Piece::setPos(int p){
    pos = p;
}

void Piece::setColour(int c){
    colour = c;
}

string Piece::getName(){
    return name;
}

void Piece::setName(string n){
    name = n;
}