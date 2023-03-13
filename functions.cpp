#include <iostream>
#include <vector>

using namespace std;

void board_print(vector<vector<int>> board, vector<char> char_list){
    for(int i = 0; i < board.size(); i++){
	    for(int j = 0; j < board[i].size(); j++){
			cout << char_list[board[i][j]] << " ";
		}
    	cout << "\n";
  	}
}

vector<vector<int>> change_state(vector<vector<int>> board, int id, int placement, int old){
	board[placement/10 - 1][placement%10 - 1] = id;
    if(old != 0){
        board[old/10 - 1][old%10 - 1] = 0;
    }
	return board;
}

vector<vector<int>> init_board(){
	return {	{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0}
	};

}

vector<char> init_char_list(){
	vector<char> char_list ={'-', '1', '2', '3', '4', '5', '6', 'a', 'b', 'c', 'd', 'e', 'f'};
	return char_list;
} 

int get_pos_command(){
	int pos;
	cout << "From where to move? ";
	cin >> pos;
	return pos;
}

int get_n_pos_command(){
	int n_pos;
	cout << "Move to: ";
	cin >> n_pos;
	return n_pos;
}

bool is_cell_occupied(vector<vector<int>> board, int pos){
	if(board[pos/10 - 1][pos%10 - 1] == 0) return 0;
	else return 1;
}