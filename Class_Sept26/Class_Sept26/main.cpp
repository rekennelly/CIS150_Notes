//
//  main.cpp
//  Class_Sept26
//
//  Created by Rachel Kennelly on 9/27/19.
//

#include <iostream>

using namespace std;


int main() {
    
    /************************************
     **** EXAMPLE 1: print rectangle ****
     ************************************/
    
//    int rows = -1;
//    int width = -1;
//
//    
//    while (rows != 0 && width != 0)
//    {
//        // how many rows
//        for (int row = 0; row < rows; row++)
//        {
//            // how many stars on a given row
//            for (int star = 0; star < width; star++)
//            {
//                cout << "*";
//            }
//            cout << endl;
//        }
//        cout << "How tall of a rectangle do you want? (0 to quit)" << endl;
//        cin >> rows;
//        
//        cout << "How wide of a rectangle do you want? (0 to quit)" << endl;
//        cin >> width;
//    }
    
    /*******************************************
     ****  EXAMPLE 2: print right triangle  ****
     *******************************************/
    
//    int triangleSize;
//    
//    cout << "How big of a right triangle do you want? (0 to quit)" << endl;
//    cin >> triangleSize;
//    
//    int numberOfStarsToPrint = 1;
//    
//    while (numberOfStarsToPrint <= triangleSize) {
//        for (int star = 0; star < numberOfStarsToPrint; star++) {
//            cout << "*";
//        }
//        cout << endl;
//        numberOfStarsToPrint++;
//    }
//    
//    cout << endl;
//    
//    // same thing in a for loop
//    for (numberOfStarsToPrint = 1; numberOfStarsToPrint <= triangleSize; numberOfStarsToPrint++) {
//        for (int star = 0; star < numberOfStarsToPrint; star++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
    
    /*************************************************
     ****  EXAMPLE 3: print equilateral triangle  ****
     *************************************************/
//    
//    int equilateralTriangleSize = 0;
//    
//    while (equilateralTriangleSize % 2 == 0) {
//        cout << "How large of a triangle do you want? (odd numbers only)" << endl;
//        cin >> equilateralTriangleSize;
//    }
//    
//    int spacesToPrint = equilateralTriangleSize / 2;
//    int starsToPrint = 1;
//    int equilateralTriangleRows = (equilateralTriangleSize / 2) + 1;
//    
//    for ( int row = 0; row < equilateralTriangleRows; row++ ) {
//        for (int space = 0; space < spacesToPrint; space++)
//        {
//            cout << " ";
//        }
//        for (int star = 0; star < starsToPrint; star++ )
//        {
//            cout << "*";
//        }
//        cout << endl;
//        spacesToPrint--;
//        starsToPrint += 2;
//    }
    
    /*************************************************
     ****     EXAMPLE 4: rock, paper, scissors    ****
     *************************************************/
    
    char playAgain = 'Y';
    
    while (playAgain == 'Y') {
        
        char userChoice = ' ';
        
        while ((userChoice != 'R') && (userChoice != 'P') && (userChoice != 'S')) {
            cout << "Pick [R]ock, [P]aper or [S]cissors " << endl;
            cin >> userChoice;
            userChoice = toupper(userChoice);
        }
        
        int computerRandomChoice = rand() % 3;
        char computerChoice;
        
        if (computerRandomChoice == 0)
        {
            computerChoice = 'R';
        }
        else if (computerRandomChoice == 1)
        {
            computerChoice = 'P';
        }
        else
        {
            computerChoice = 'S';
        }
        
        if (computerChoice == userChoice)
        {
            cout << "It's a tie!" << endl;
        }
        else if ( (computerChoice == 'P' && userChoice == 'R')
                || (computerChoice == 'R' && userChoice == 'S')
                || (computerChoice == 'S' && userChoice == 'P'))
        {
            cout << "You lose!" << endl;
        }
        else
        {
            cout << "You win!" << endl;
        }
        
        cout << "Do you want to play again? Y/N" << endl;
        cin >> playAgain;
        playAgain = toupper(playAgain);
    }
    
    return 0;
}
