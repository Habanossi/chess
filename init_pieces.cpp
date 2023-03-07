#include "Piece.h"
#include <iostream>
#include <vector>
using namespace std;

vector<Piece> init_pieces(){
    vector<Piece> pieces;
    Piece queen1("Queen", 1, 85, 0);
    Piece pawn1("Pawn", 2, 22, 1);
    pieces.push_back(queen1);
    pieces.push_back(pawn1);
    return pieces;
}
