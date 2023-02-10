#include "Piece.h"
#include <iostream>
#include <vector>
using namespace std;

vector<Piece> init_pieces(){
    vector<Piece> pieces;
    Piece queen1("Queen", 1, 85);
    pieces.push_back(queen1);
    return pieces;
}
