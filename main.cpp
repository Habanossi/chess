#include <iostream>
#include <vector>
#include "init_pieces.cpp"
//#include "move_pieces.cpp"
#include "Piece.h"
//#include "Piece.cpp"
#include "Board.h"

using namespace std;

//void update_board(Board board, vector<Piece> pieces){
	//go through pieces, update board for each
  /*
  for each piece:
    board.change_state(piece.id, piece.placement);
  board.print();

  */
//}

int main() {
  cout << "Wanna play chess? cool beans!\n";
  //int board[8][8] = {0};
  Board board;
  vector<Piece> pieces;
  //update_board(board, pieces);
  board.print();
  //cout << "debug\n";
  pieces = init_pieces();
  //cout << "debug\n";
  //move_pieces(board, pieces);
  //make move
  //update board, print it
  return 0;
} 