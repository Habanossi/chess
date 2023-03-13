/*#include <iostream>
//#include "init_pieces.cpp"
#include "Piece.h"
#include "board_functions.cpp"

void run(Piece &i, int new_pos, int k, vector<vector<int>> board){
    std::cout << "RUN\n";
    
    //int k = i.getPos();
	//i.move(new_pos);
	board = change_state(board, i.getId(), new_pos, k);
    i.print();
}*/

#include <iostream>
#include <vector>
#include "init_pieces.cpp"
#include "Piece.h"
#include "Piece.cpp"
#include "board_functions.cpp"
//#include "run.cpp"

using namespace std;

void run(){
//init board state, pieces
	vector<char> char_list ={'-', '1', '2', '3', '4', '5', '6', 'a', 'b', 'c', 'd', 'e', 'f'};
	vector<vector<int>> board  = init_board();
	vector<Piece> pieces = init_pieces();
	for(auto i : pieces){
		board = change_state(board, i.getId(), i.getPos(), 0);
	}
	board_print(board, char_list);

	//start game
	cout << "Wanna play chess? cool beans!\n";
	int new_pos = 1;
	int old_pos;
	while(new_pos != 0){
		bool c = 1;
		while(c){
			std::cout << "From where to move? ";
			std::cin >> old_pos;
			if(old_pos == 0){
				c = 0;
				new_pos = 0;
				break;
			}
			for(auto& i : pieces){
				if(i.getPos() == old_pos){
					bool l = 1;
					while(l){
						std::cout << "Move to: ";
						std::cin >> new_pos;
						if(board[new_pos/10 - 1][new_pos%10 - 1] == 0) l = 0;
						else std::cout << "can't move there.\n";
					}
					int k = i.getPos();
					i.move(new_pos);
					board = change_state(board, i.getId(), new_pos, k);
					i.print();
					//run(i, new_pos, k, board);
					c = 0;
					break;
				}
			} if(c) std::cout << "No piece there.\n";
		}
		
		if(new_pos != 0){
			board_print(board, char_list);
		}
		
	}
}