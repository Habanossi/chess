#include <iostream>
#include <vector>
#include "init_pieces.cpp"
#include "Piece.h"
#include "functions.cpp"

using namespace std;

void run(){
	//init board state, pieces
	vector<char> char_list = init_char_list();	//list of printed symbols for pieces as well as empty cell
	vector<vector<int>> board  = init_board(); 	//board state matrix
	vector<Piece> pieces = init_pieces(); 		//list of all pieces in the game
	for(auto i : pieces){
		board = change_state(board, i.getId(), i.getPos(), 0);
	}

	//start game
	cout << "Wanna play chess? cool beans!\n";

	int pos = 1; //current position, position the piece is moving from
	int n_pos = 1; //new position, position the piece is moving to

	while(pos != 0){
		board_print(board, char_list);
		bool c = 1;
		while(c){
			pos = get_pos_command();
			if(pos == 0){ // check for quitting command 0
				c = 0;
				break;
			}
			for(auto& i : pieces){
				if(i.getPos() != pos) continue;
				bool l = 1;
				while(l){
					n_pos = get_n_pos_command();
					if(is_cell_empty(board, n_pos)) l = 0;
					else cout << "can't move there.\n";
				}
				int k = i.getPos();
				i.move(n_pos);
				board = change_state(board, i.getId(), n_pos, k);
				i.print();
                cout << "RUN\n";
				c = 0;
				break;
			} if(c) cout << "No piece there.\n";
		}
	}
}