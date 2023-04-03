#include "Piece.h"
#include <iostream>

using namespace std;

Piece::Piece(string n, int i, int p){     // Constructor
    setName(n);
    setId(i);
    setPos(p);
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

void Piece::setId(int i){
    id = i;
}

void Piece::setPos(int p){
    pos = p;
}

string Piece::getName(){
    return name;
}

void Piece::setName(string n){
    name = n;
}