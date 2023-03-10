#include <iostream>
#include <vector>
#include "init_pieces.cpp"
#include "Piece.h"
#include "functions.cpp"

using namespace std;

void run(){
	cout << "Wanna play chess? cool beans!\n";
	//init board state, pieces
	vector<char> char_list = init_char_list();	//list of printed symbols for pieces as well as empty cell
	vector<vector<int>> board  = init_board(); 	//board state matrix
	vector<Piece> pieces = init_pieces(); 		//list of all pieces in the game
	for(auto i : pieces){
		board = change_state(board, i.getId(), i.getPos(), 0);
	}
	cout << "Initiations complete, let's start!\n";
	
	//start game
	int pos = 1; //current position, position the piece is moving from
	//gameplay loop
	while(pos != 0){
		int n_pos = 1; //new position, position the piece is moving to
		board_print(board, char_list);
		bool c = 1;
		//loop for checking from where we want to move our piece
		while(c){	
			pos = get_pos_command();
			if(pos == 0) break; // check for quitting command 0
			
			//loop for checking to where we want to move our piece
			while(n_pos == 1){
				n_pos = get_n_pos_command();
				if(is_cell_occupied(board, n_pos)){
					cout << "Can't move there.\n";
					n_pos = 1;
				}
			}	
			
			for(auto& i : pieces){
				if(i.getPos() != pos) continue;
				i.move(n_pos); //change the piece's position
				board = change_state(board, i.getId(), n_pos, pos); //change the board state accordingly
				i.print();
				c = 0;
				break;
			} if(c) cout << "No piece there.\n";
		}
	}
}