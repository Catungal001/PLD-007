#include <iostream>
using namespace std;

class Chessboard 
{
private:
    char board[8][8];

public:
    Chessboard() 
	{
        initialize();
    }

    void initialize() 
	{
    	
        
        board[0][0] = 'R'; board[0][1] = 'N'; board[0][2] = 'B'; board[0][3] = 'Q';
        board[0][4] = 'K'; board[0][5] = 'B'; board[0][6] = 'N'; board[0][7] = 'R';
        for (int i = 0; i < 8; i++) 
		{
            board[1][i] = 'P'; 
            board[6][i] = 'p'; 
        }
        board[7][0] = 'r'; board[7][1] = 'n'; board[7][2] = 'b'; board[7][3] = 'q';
        board[7][4] = 'k'; board[7][5] = 'b'; board[7][6] = 'n'; board[7][7] = 'r';
        for (int i = 2; i < 6; i++) 
		{
            for (int j = 0; j < 8; j++) 
			{
                board[i][j] = ' '; 
            }
        }
    }

    void display() {
        for (int i = 0; i < 8; i++) 
		{
            for (int j = 0; j < 8; j++) 
			{
                cout<< board[i][j] << " ";
            }
            cout<< endl;
        }
    }
};

int main() 
{
    Chessboard chessboard;
    chessboard.display();
    return 0;
}


