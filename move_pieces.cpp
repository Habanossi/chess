#include <iostream>
#include <vector>
#include "Piece.h"

void move_pieces(Board board, vector<Piece> pieces){

    Piece queen1 = pieces[1];
    int x = 1;
  	while(x != 0){
    	std::cout << "Move the queen: "; //
    	std::cin >> x;
		board.change_state(0, queen1.placement); 
		queen1.move(x);
		board.change_state(queen1.id, queen1.placement);
		//if(x != 0){
		//	print_board(board);
		//}
  	}
}