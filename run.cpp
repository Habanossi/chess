#include <iostream>
#include <vector>
#include "Piece.h"
#include "functions.cpp"

using namespace std;

void run(){
	cout << "Wanna play chess? cool beans! Let's first initiate the board state.\n";
	//init board state, pieces
	vector<string> char_list = init_char_list();	//list of printed symbols for pieces as well as empty cell
	vector<vector<int>> board  = init_board(); 	//board state matrix
	vector<Piece> pieces = init_pieces(); 		//list of all pieces in the game
	for(auto i : pieces){
		board = change_state(board, i.getId(), i.getPos(), 0);
	}
	cout << "Initiations complete, let's start!\n";
	int exit_command_called = 0;						
	while(!exit_command_called){					//gameplay loop
		int from_cell = 1;					//current position, position the piece is moving from
		int to_cell = 1; 					//new position, position the piece is moving to
		bool cell_occupied = 1;
		bool cell_empty = 1;
		board_print(board, char_list);
		
		while(cell_empty){				//loop for checking from where we want to move our piece
			from_cell = get_pos_command();
			if(from_cell == 99) break; 		//check for quitting command 99
			if(!is_cell_occupied(board, from_cell)){
				cout << "No piece there.\n";
			}
			else cell_empty = 0;
		}	
		if(from_cell == 99){
			exit_command_called = 1;
			break;
		} 
		
		while(cell_occupied){				//loop for checking to where we want to move our piece
			to_cell = get_n_pos_command();
			if(to_cell == 99){				//check for quitting command 99
				break;
				}
			if(is_cell_occupied(board, to_cell)){
				cout << "Can't move there.\n";
			}
			else cell_occupied = 0;
		}	
		if(to_cell == 99){
			exit_command_called = 1;
			break;
		}
		for(auto& i : pieces){
			if(i.getPos() != from_cell) continue;
			i.move(to_cell); //change the piece's position
			board = change_state(board, i.getId(), to_cell, from_cell); //change the board state accordingly
			i.print();
			break;
		}
	}
}