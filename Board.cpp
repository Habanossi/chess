#include "Board.h"
#include <iostream>

void Board::print(){
    for(int i = 1; i < 9; ++i){
	    for(int j = 1; j < 9; ++j){
    	      cout << std::to_string(board[i][j]) + " ";
              if(board[i][j] == 1){//queen.id){
        	     //cout << " q ";
       	 	  }
        	  //else cout << " x ";
		}
    	cout << "\n";
  	}
}

void Board::change_state(int id, int placement){
    board[placement/10][placement%10] = id;
}