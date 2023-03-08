#include <iostream>
#include <vector>
#include "init_pieces.cpp"
#include "Piece.h"
#include "Piece.cpp"
#include "board_functions.cpp"

using namespace std;

int main() {
	cout << "Wanna play chess? cool beans!\n";
	vector<char> char_list ={'-', '1', '2', '3', '4', '5', '6', 'a', 'b', 'c', 'd', 'e', 'f'};
	vector<vector<int>> board  = {	{0,0,0,0,0,0,0,0},
									{0,0,0,0,0,0,0,0},
									{0,0,0,0,0,0,0,0},
									{0,0,0,0,0,0,0,0},
									{0,0,0,0,0,0,0,0},
									{0,0,0,0,0,0,0,0},
									{0,0,0,0,0,0,0,0},
									{0,0,0,0,0,0,0,0}
	};

	vector<Piece> pieces = init_pieces();
	for(auto i : pieces){
		board = change_state(board, i.id, i.placement, 0);
	}
	board_print(board, char_list);
	int new_placement = 1;
	int old_placement;
	while(new_placement != 0){
		bool c = 1;
		while(c){
			std::cout << "From where to move?";
			std::cin >> old_placement;

			for(auto& i : pieces){
				if(i.placement == old_placement){
					bool l = 1;
					while(l){
						std::cout << "Move to: ";
						std::cin >> new_placement;
						if(board[new_placement/10 - 1][new_placement%10 - 1] == 0) l = 0;
						else std::cout << "can't move there.\n";
					}
					int k = i.getPlacement();
					i.move(new_placement);
					board = change_state(board, i.id, new_placement, k);
					i.print(); //denhä säger att rookken har ny position
					c = 0;
					break;
				}
			} if(c) std::cout << "No piece there.\n";
		}
		
		if(new_placement != 0){
			board_print(board, char_list);
		}
		
	}
	return 0;
} 