#include <iostream>
#include <vector>

using namespace std;

void board_print(vector<vector<int>> board){
    for(int i = 0; i < board.size(); i++){
	    for(int j = 0; j < board[i].size(); j++){
    	    cout << board[i][j] << " ";
		}
    	cout << "\n";
  	}
}

vector<vector<int>> change_state(vector<vector<int>> board, int id, int placement, int old){
	board[placement/10 - 1][placement%10 - 1] = id;
    if(old != 0){
        board[old/10 - 1][old%10 - 1] = id;
    }
	return board;
}