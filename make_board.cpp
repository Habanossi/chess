#include <iostream>


using namespace std;

class Piece {
    public:
        string name;
        int id;
};



void make_board() {
  	int board[8][8] = {0}; 
  	Piece queen;
  	queen.name = "Queen";
  	queen.id = 1;
  	board[8][5] = queen.id;
  
  	for(int i = 1; i < 9; ++i){
		//cout << i;
	    for(int j = 1; j < 9; ++j){
    	    if(board[i][j] == queen.id){
        	    cout << " o ";
       	 	}
        	else cout << " x ";
    	//cout << j;
		}
    	cout << "\n";
  	}
    cout << board[0][0];
    cout << "\n";
}