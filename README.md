Chess program architecture

main():
	- runs run()
	
run():
	- runs the game. This includes:
	- init and print a 8x8 chessboard in ASCII. Create a matrix (vector of vectors) for it.
	- Create pieces for the board, through the Piece class and init_pieces() function
	- allow user to move the pieces any way it wants to
	- if user tries to move a piece on another piece, it won't allow it
	- quit when user inserts "99"

init_pieces():
	Initiates and returns a vector of all pieces in the game. Currently creates one queen and one pawn.

Piece class:
	- constructor creates a Piece object with string name, int id and int placement.
	- move(new_placement) updates an object's placement






TODO:
	- allow eating of opponents pieces
	- introduce movement restrictions for pieces
	- ban trying to move outside the board
