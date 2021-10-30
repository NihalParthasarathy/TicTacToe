//Nihal Parthasarathy
//10/23/2021
//This code lets the user play a tic tac toe game in the console by placing X and Os in a 3 by 3 grid and trying to get 3 in a row
#include <iostream>
#include <cstring>

using namespace std;

//Initilizes struct
struct game {
  int board[3][3];
  int turn;
  int move;

};

//Calls the functions
void printBoard(game board);
bool checkWinX(game newboard);
bool checkWinO(game newboard);
bool checkTie(game newboard);

int main() {

  //Initilizes Varubles
  struct game newboard;
  struct game X;
  struct game O;
  X.turn = 0;
  O.turn = 1;
  X.move = 1;
  O.move = 2;
  int Xwins = 0;
  int Owins = 0;
  int ties = 0;
  int BLANK = 0;
  char str[2];
  char str2[1];
  int whosturn = X.turn;
  bool stillPlaying = true;

  //Sets the internal board to all blanks
  while (stillPlaying == true) {
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
	newboard.board[i][j] = BLANK;
      }
    }
    
    whosturn = X.turn;

    //Checks to see if any of these conditions have happend and if they havnt conties the game
    while (checkWinX(newboard) == false && checkWinO(newboard) == false && checkTie(newboard) == false) {  
      printBoard(newboard);
      cout << "Enter a letter followed by a number" << endl;
      cin.get(str, 3);
      cin.get();
      //Checks to see if there is any invalid moves
      if (str[0] != 'a' && str[0] != 'b' && str[0] != 'c') {
	cout << "first letter must be a b or c" << endl;
      }
      else if (str[1] != '1' && str[1] != '2' && str[1] != '3') {
	cout << "second charector must be either 1 2 or 3" << endl;
      }

      else {
	for (int row = 0; row < 1; row++) {
	  for (int colum = 0; colum < 1; colum ++) {

	    //Sets the internal array to X if the space is blank and its X's turn
	    if (whosturn == X.turn) {
	  
	      if (str[0] == 'a' && str[1] == '1' && newboard.board[0][0] == BLANK) {
		newboard.board[0][0] = X.move;
		whosturn = O.turn;
	      }
	      else if (str[0] == 'a' && str[1] == '2' && newboard.board[1][0] == BLANK) {
		newboard.board[1][0] = X.move;
		whosturn = O.turn;
	      }
	      else if (str[0] == 'a' && str[1] == '3' && newboard.board[2][0] == BLANK) {
		newboard.board[2][0] = X.move;
		whosturn = O.turn;
	      }
	      else if (str[0] == 'b' && str[1] == '1' && newboard.board[0][1] == BLANK) {
		newboard.board[0][1] = X.move;
		whosturn = O.turn;
	      }
	      else if (str[0] == 'b' && str[1] == '2' && newboard.board[1][1] == BLANK) {
		newboard.board[1][1] = X.move;
		whosturn = O.turn;
	      }
	      else if (str[0] == 'b' && str[1] == '3' && newboard.board[2][1] == BLANK) {
		newboard.board[2][1] = X.move;
		whosturn = O.turn;
	      }
	      else if (str[0] == 'c' && str[1] == '1' && newboard.board[0][2] == BLANK) {
		newboard.board[0][2] = X.move;
		whosturn = O.turn;
	      }
	      else if (str[0] == 'c' && str[1] == '2' && newboard.board[1][2] == BLANK) {
		newboard.board[1][2] = X.move;
		whosturn = O.turn;
	      }
	      else if (str[0] == 'c' && str[1] == '3' && newboard.board[2][2] == BLANK) {
		newboard.board[2][2] = X.move;
		whosturn = O.turn;
	      }
	      else {
		cout << "Iligal move! Try again" << endl;
	      }	  
	    }

	    //Sets the internal array to O if the space is blank and its O's turn
	    else {
	      if (str[0] == 'a' && str[1] == '1' && newboard.board[0][0] == BLANK) {
		newboard.board[0][0] = O.move;
		whosturn = X.turn;
	      }
	      else if (str[0] == 'a' && str[1] == '2' && newboard.board[1][0] == BLANK) {
		newboard.board[1][0] = O.move;
		whosturn = X.turn;
	      }
	      else if (str[0] == 'a' && str[1] == '3' && newboard.board[2][0] == BLANK) {
		newboard.board[2][0] = O.move;
		whosturn = X.turn;
	      }
	      else if (str[0] == 'b' && str[1] == '1' && newboard.board[0][1] == BLANK) {
		newboard.board[0][1] = O.move;
		whosturn = X.turn;
	      }
	      else if (str[0] == 'b' && str[1] == '2' && newboard.board[1][1] == BLANK) {
		newboard.board[1][1] = O.move;
		whosturn = X.turn;
	      }
	      else if (str[0] == 'b' && str[1] == '3' && newboard.board[2][1] == BLANK) {
		newboard.board[2][1] = O.move;
		whosturn = X.turn;
	      }
	      else if (str[0] == 'c' && str[1] == '1' && newboard.board[0][2] == BLANK) {
		newboard.board[0][2] = O.move;
		whosturn = X.turn;
	      }
	      else if (str[0] == 'c' && str[1] == '2' && newboard.board[1][2] == BLANK) {
		newboard.board[1][2] = O.move;
		whosturn = X.turn;
	      }
	      else if (str[0] == 'c' && str[1] == '3' && newboard.board[2][2] == BLANK) {
		newboard.board[2][2] = O.move;
		whosturn = X.turn;
	      }
	      else {
		cout << "Ilegal Move! Try again" << endl;
	      }
	  
	    }
	
	  }
	}
      }
    }

    if (checkWinX(newboard) == true) {
      cout << "X Wins!" << endl;
      Xwins++;
    }
    else if(checkWinO(newboard) == true) {
      cout << "O Wins!" << endl;
      Owins++;
    }
    else if(checkTie(newboard) == true) {
      cout << "Tie!" << endl;
      ties++;
    }

    //Asks the user if they want to play agin and if they do restarts the game and sets the board to blanks
    cout << "X has won " << Xwins << " times, O has won " << Owins << " times, there have been " << ties << " ties" << endl;
    cout << "Play again?  y or n" << endl;
    cin.get(str2, 2);
    cin.get();
    if (str2[0] == 'y') {
      stillPlaying = true;
      for (int i = 0; i < 3; i++) {
	for (int j = 0; j < 3; j++) {
	  newboard.board[i][j] = BLANK;
	  cout << "reseted" << endl;
	}
      } 
    }
    else {
      stillPlaying = false;
    }
  }
  return 0;
}

void printBoard(game newboard) {
  //Prints the board
  int num = 1;
  cout << "  a b c" << endl;
  for (int i = 0; i < 3; i++) {
    cout << '\0' << endl;
    cout << num;
    num++;
    for (int j=0; j < 3; j++) {
      cout << ' ';
       if (newboard.board[i][j] == 0) {
	 cout << ' ';
       }
       if (newboard.board[i][j] == 1) {
	 cout << 'X';
       }
       if (newboard.board[i][j] == 2) {
	 cout << 'O';
       }
    }
    cout << '\0' << endl;
  }
  
}

bool checkWinX(game newboard) {
  //Checks to see if X has won
  if (newboard.board[0][0] == 1 && newboard.board[0][1] == 1 && newboard.board[0][2] == 1) {
    return true;
  }
  else if (newboard.board[0][0] == 1 && newboard.board[1][1] == 1 && newboard.board[2][2] == 1) {
    return true;
  }
  else if (newboard.board[2][0] == 1 && newboard.board[1][1] == 1 && newboard.board[0][2] == 1) {
    return true;
  }
  else if (newboard.board[1][0] == 1 && newboard.board[1][1] == 1 && newboard.board[1][2] == 1) {
    return true;
  }
  else if (newboard.board[2][0] == 1 && newboard.board[2][1] == 1 && newboard.board[2][2] == 1) {
    return true;
  }
  else if (newboard.board[0][0] == 1 && newboard.board[1][0] == 1 && newboard.board[2][0] == 1) {
    return true;
  }
  else if (newboard.board[0][1] == 1 && newboard.board[1][1] == 1 && newboard.board[2][1] == 1) {
    return true;
  }
  else if (newboard.board[0][2] == 1 && newboard.board[1][2] == 1 && newboard.board[2][2] == 1) {
    return true;
  }
  else {
    return false;
  }

}

bool checkWinO(game newboard) {
  //Checks to see if O has won
  if (newboard.board[0][0] == 2 && newboard.board[0][1] == 2 && newboard.board[0][2] == 2) {
    return true;
  }
  else if (newboard.board[0][0] == 2 && newboard.board[1][1] == 2 && newboard.board[2][2] == 2) {
    return true;
  }
  else if (newboard.board[2][0] == 2 && newboard.board[1][1] == 2 && newboard.board[0][2] == 2) {
    return true;
  }
  else if (newboard.board[1][0] == 2 && newboard.board[1][1] == 2 && newboard.board[1][2] == 2) {
    return true;
  }
  else if (newboard.board[2][0] == 2 && newboard.board[2][1] == 2 && newboard.board[2][2] == 2) {
    return true;
  }
  else if (newboard.board[0][0] == 2 && newboard.board[1][0] == 2 && newboard.board[2][0] == 2) {
    return true;
  }
  else if (newboard.board[0][1] == 2 && newboard.board[1][1] == 2 && newboard.board[2][1] == 2) {
    return true;
  }
  else if (newboard.board[0][2] == 2 && newboard.board[1][2] == 2 && newboard.board[2][2] == 2) {
    return true;
  }
  else {
    return false;
  }

}

bool checkTie(game newboard) {
  //Checks to see if there is a tie
  bool temp = true;
  for (int row = 0; row < 3; row++) {
    for (int colum = 0; colum < 3; colum++) {
      if (newboard.board[row][colum] == 0) {
	temp = false;
	
      }
    }
  }
  if (temp == false) {
    return false;
  }
  return true;
}
