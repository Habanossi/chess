#include <iostream>
#include <vector>
#include "Piece.h"

using namespace std;

void board_print(vector<vector<int>> board, vector<string> char_list){
    for(int i = 0; i < board.size(); i++){
	    for(int j = 0; j < board[i].size(); j++){
			cout << char_list[board[i][j]] << " ";
		}
    	cout << "\n";
  	}
}

vector<vector<int>> change_state(vector<vector<int>> board, int id, int placement, int old){
	board[placement/10 - 1][placement%10 - 1] = id;
    if(old != 0){
        board[old/10 - 1][old%10 - 1] = 0;
    }
	return board;
}

vector<vector<int>> init_board(){
	return {	{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0}
	};

}

vector<string> init_char_list(){
	vector<string> char_list = {"-", "1", "2", "3", "4", "5", "6", "a", "b", "c", "d", "e", "f"};
	return char_list;
} 

int get_pos_command(){
	int pos;
	cout << "From where to move? ";
	cin >> pos;
	return pos;
}

int get_n_pos_command(){
	int n_pos;
	cout << "Move to: ";
	cin >> n_pos;
	return n_pos;
}

bool is_cell_occupied(vector<vector<int>> board, int pos){
	if(board[pos/10 - 1][pos%10 - 1] == 0) return 0;
	else return 1;
}

vector<Piece> init_pieces(){
    vector<Piece> pieces = {
        //create white pieces
        Piece("White Queen", 1, 85),
        Piece("White King", 2, 84),
        Piece("White Rook", 3, 81),
        Piece("White Rook", 3, 88),
        Piece("White Knight", 4, 82),
        Piece("White Knight", 4, 87),
        Piece("White Bishop", 5, 83),
        Piece("White Bishop", 5, 86),
        Piece("White Pawn", 6, 71),
        Piece("White Pawn", 6, 72),
        Piece("White Pawn", 6, 73),
        Piece("White Pawn", 6, 74),
        Piece("White Pawn", 6, 75),
        Piece("White Pawn", 6, 76),
        Piece("White Pawn", 6, 77),
        Piece("White Pawn", 6, 78),

        //create black pieces
        Piece("Black Queen", 7, 15),
        Piece("Black King", 8, 14),
        Piece("Black Rook", 9, 11),
        Piece("Black Rook", 9, 18),
        Piece("Black Knight", 10, 12),
        Piece("Black Knight", 10, 17),
        Piece("Black Bishop", 11, 13),
        Piece("Black Bishop", 11, 16),
        Piece("Black Pawn", 12, 21),
        Piece("Black Pawn", 12, 22),
        Piece("Black Pawn", 12, 23),
        Piece("Black Pawn", 12, 24),
        Piece("Black Pawn", 12, 25),
        Piece("Black Pawn", 12, 26),
        Piece("Black Pawn", 12, 27),
        Piece("Black Pawn", 12, 28)
    };
    cout << "\n\n";
    return pieces;
}