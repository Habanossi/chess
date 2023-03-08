#include "Piece.h"
#include <iostream>
#include <vector>
using namespace std;

vector<Piece> init_pieces(){
    vector<Piece> pieces = {
        //create white pieces
        Piece("White Queen", 1, 85, 0),
        Piece("White King", 2, 84, 0),
        Piece("White Rook", 3, 81, 0),
        Piece("White Rook", 3, 88, 0),
        Piece("White Knight", 4, 82, 0),
        Piece("White Knight", 4, 87, 0),
        Piece("White Bishop", 5, 83, 0),
        Piece("White Bishop", 5, 86, 0),
        Piece("White Pawn", 6, 71, 0),
        Piece("White Pawn", 6, 72, 0),
        Piece("White Pawn", 6, 73, 0),
        Piece("White Pawn", 6, 74, 0),
        Piece("White Pawn", 6, 75, 0),
        Piece("White Pawn", 6, 76, 0),
        Piece("White Pawn", 6, 77, 0),
        Piece("White Pawn", 6, 78, 0),

        //create black pieces
        Piece("Black Queen", 7, 15, 1),
        Piece("Black King", 8, 14, 1),
        Piece("Black Rook", 9, 11, 1),
        Piece("Black Rook", 9, 18, 1),
        Piece("Black Knight", 10, 12, 1),
        Piece("Black Knight", 10, 17, 1),
        Piece("Black Bishop", 11, 13, 1),
        Piece("Black Bishop", 11, 16, 1),
        Piece("Black Pawn", 12, 21, 1),
        Piece("Black Pawn", 12, 22, 1),
        Piece("Black Pawn", 12, 23, 1),
        Piece("Black Pawn", 12, 24, 1),
        Piece("Black Pawn", 12, 25, 1),
        Piece("Black Pawn", 12, 26, 1),
        Piece("Black Pawn", 12, 27, 1),
        Piece("Black Pawn", 12, 28, 1)
    };
    cout << "\n\n";
    return pieces;
}
