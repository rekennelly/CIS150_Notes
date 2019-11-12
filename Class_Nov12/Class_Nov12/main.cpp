//
//  main.cpp
//  Class_Nov12
//
//  Created by Rachel Kennelly on 11/12/19.
//

#include <iostream>
#include <vector>

using namespace std;

class TicTacToe
{
public:
   char getCurrentPlayer()
    {
        return currentPlayer;
    }
    
    string toString()
    {
        string output = " ";
        output += board.at(0).at(0);
        output += " | ";
        output += board.at(0).at(1);
        output += " | ";
        output += board.at(0).at(2);
        output += '\n';
        output += "-----------";
        output += '\n';
        output += " ";
        output += board.at(1).at(0);
        output += " | ";
        output += board.at(1).at(1);
        output += " | ";
        output += board.at(1).at(2);
        output += '\n';
        output += "-----------";
        output += '\n';
        output += " ";
        output += board.at(2).at(0);
        output += " | ";
        output += board.at(2).at(1);
        output += " | ";
        output += board.at(2).at(2);
        output += '\n';

        return output;
    }
    
    bool didSomeoneWinHorizontally()
    {
        for (int row = 0; row < 3; row++)
        {
            if (board.at(row).at(0) != ' '
                && board.at(row).at(0) == board.at(row).at(1)
                && board.at(row).at(1) == board.at(row).at(2))
            {
                return false;
            }
        }
        return false;
    }
    
    bool didSomeoneWinVertically()
    {
        for (int column = 0; column < 3; column++)
        {
            if (board.at(0).at(column) != ' '
                && board.at(0).at(column) == board.at(1).at(column)
                && board.at(1).at(column) == board.at(2).at(column))
            {
                return true;
            }
        }
        return false;
    }
    
    bool didSomeoneWinDiagonallyUp()
    {
        return (board.at(2).at(0) != ' '
                && board.at(2).at(0) == board.at(1).at(1)
                && board.at(1).at(1) == board.at(0).at(2));
    }
    
    bool didSomeoneWinDiagonallyDown()
    {
        return (board.at(0).at(0) != ' '
                && board.at(0).at(0) == board.at(1).at(1)
                && board.at(1).at(1) == board.at(2).at(2));
    }
    
    bool isTheGameTied()
    {
        for ( vector<char> row : board)
        {
            for (char location : row)
            {
                if (location == ' ')
                {
                    return false;
                }
            }
        }
        return true;
    }
    
    bool isGameOver()
    {
        return didSomeoneWinHorizontally() || didSomeoneWinVertically()
        || didSomeoneWinDiagonallyDown() || didSomeoneWinDiagonallyUp()
        || isTheGameTied();
    }
    
    bool playPiece(int row, int column)
    {
        if (board.at(row).at(column) != ' ')
        {
            return false;
        }
        
        board.at(row).at(column) = currentPlayer;
        if (currentPlayer == 'X')
        {
            currentPlayer = 'O';
        }
        else
        {
            currentPlayer = 'X';
        }
        return true;
    }
    void reset(){
        
    }
    
private:
    char currentPlayer = 'X';
    vector<vector<char>> board = { { ' ', ' ', ' ' },
                                   { ' ', ' ', ' ' },
                                   { ' ', ' ', ' ' } };
};

int main() {
    
    TicTacToe game;
    
    while (!game.isGameOver())
    {
        int row;
        int column;
        
        cout << game.toString();
        cout << game.getCurrentPlayer() << "'s turn!" << endl;
        cout << "Enter a row and column to mark (start with 0) " << endl;
        cin >> row >> column;
        
        if (!game.playPiece(row, column))
        {
            cout << "You can't play there!" << endl;
        }
        
        game.playPiece(row,column);
    }
    
    return 0;
}
