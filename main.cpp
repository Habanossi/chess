#include <iostream>
#include <vector>
#include "init_pieces.cpp"
#include "Piece.h"
//#include "Piece.cpp"
#include "board_functions.cpp"

using namespace std;

int main() {
	cout << "Wanna play chess? cool beans!\n";
	vector<vector<int>> board  = {{0,0,0,0,0,0,0,0},
									{0,0,0,0,0,0,0,0},
									{0,0,0,0,0,0,0,0},
									{0,0,0,0,0,0,0,0},
									{0,0,0,0,0,0,0,0},
									{0,0,0,0,0,0,0,0},
									{0,0,0,0,0,0,0,0},
									{0,0,0,0,0,0,0,0}};

	//board_print(board);
	vector<Piece> pieces = init_pieces();
	
	board = change_state(board, pieces[0].id, pieces[0].placement, 0);
	board = change_state(board, pieces[1].id, pieces[1].placement, 0);
	board_print(board);
	int x = 1;
	int y = 0;
	while(x != 0){
		std::cout << "What to move? 1 for queen, 2 for pawn: "; //
		std::cin >> y;
		std::cout << "Move to: "; //
		std::cin >> x;
		if(board[x/10 - 1][x%10 - 1] == 0){
			int old = pieces[y-1].move(x);
			board = change_state(board, pieces[y-1].id, x, old);
		}
		else{
			std::cout << "can't move there.\n";
		}
		if(x != 0){
			board_print(board);
		}
	}
	return 0;
} 