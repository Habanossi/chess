#include <iostream>
#include <vector>
#include "Piece.h"

using namespace std;

void board_print(vector<vector<int>> board, vector<char> char_list){
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

vector<char> init_char_list(){
	vector<char> char_list ={'-', '1', '2', '3', '4', '5', '6', 'a', 'b', 'c', 'd', 'e', 'f'};
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