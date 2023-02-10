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
	board_print(board);
	int x = 1;
	int y = 0;
	while(x != 0){
		std::cout << "What to move? 0 for queen: "; //
		std::cin >> y;
		std::cout << "Move the queen: "; //
		std::cin >> x;
		int old;
		old = pieces[0].move(x);
		board = change_state(board, pieces[y].id, x, old);
		if(x != 0){
			board_print(board);
		}
	}
	return 0;
} 