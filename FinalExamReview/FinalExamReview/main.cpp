//
//  main.cpp
//  FinalExamReview
//
//  Created by Rachel Kennelly on 12/10/19.
//  Copyright © 2019 Rachel Kennelly. All rights reserved.
//

#include <iostream> 
#include <vector>
#include <string>

using namespace std;


/***********
 Classes: Write a class LuckyNumberChecker.Include a constructor that accepts
 an integer named luckyDivisor.
 Add a method named checkNumber that accept an integer named number
 and returns a string.
 If the number argument is evenly divisible by the luckyDivisor,
 return "This number is lucky".
 otherwise, if the number is odd,
 return "This number might be lucky"otherwise, return "this number is not lucky"
 ************/

class LuckyNumberChecker
{
public:
    LuckyNumberChecker(int luckyDivisor = 0)
    {
        this->luckyDivisor = luckyDivisor;
    }
    
    string checkNumber(int number)
    {
        if (number % luckyDivisor == 0)
        {
            return "This number is lucky";
        }
        else if (number % 2 == 1)
        {
            return "This number might be lucky";
        }
        else
        {
            return "This number is not lucky";
        }
    }
    
private:
    int luckyDivisor;
};

/**************
 Imagine you have a 2d vector that is a chessboard
 ( 8 by 8, top left or 0,0 is a black square )
 Write a function sumOfWhiteMinusBlackSquares that accepts a vector<vector<int>>,
 For every value on a ‘white’ square, add it to the sum,
 and for every value on a black square, subtract the value.
 Return the sum when you are done.
 *************/

int sumOfWhiteMinusBlackSquares(vector<vector<int>> values)
{
    int sum = 0;
    
    for (int rowIndex = 0; rowIndex < values.size(); rowIndex++)
    {
        // even rows - odds are white, evens are black
        // odd rows - evens are white, odds are black
        
        // EVEN ROWS
        if (rowIndex % 2 == 0)
        {
            for (int columnIndex = 0; columnIndex < values.at(rowIndex).size(); columnIndex++)
            {
                if (columnIndex % 2 == 0)
                {
                    sum -= values.at(rowIndex).at(columnIndex);
                }
                else
                {
                    sum += values.at(rowIndex).at(columnIndex);
                }
            }
        }
        // ODD ROWS
        else
        {
            for (int columnIndex = 0; columnIndex < values.at(rowIndex).size(); columnIndex++)
            {
                if (columnIndex % 2 == 0)
                {
                    sum += values.at(rowIndex).at(columnIndex);
                }
                else
                {
                    sum -= values.at(rowIndex).at(columnIndex);
                }
            }
        }
    }
    
    return sum;
}


int main()
{
    
    /**************
     Write c++ code that declares a dynamic array of characters called letters
     sized 26. Add the characters A to Z to the dynamic array any way you choose.
     Delete the array when your are done.
     *************/
    char* letters = new char[26];
    char currentLetter = 'A';
    for (int index = 0; index < 26; index++)
    {
        letters[index] = currentLetter;
        currentLetter++;
    }
    
    // TEST IF IT WORKED
    for (int index = 0; index < 26; index++)
    {
        cout << letters[index];
    }
    cout << endl;
    
    delete []letters;
    

    // TEST sumOfWhiteMinusBlackSquares
    vector<vector<int>> numbers = {
        {1,2,3,4},      //
        {5,6,7,8},      //
        {9,10,11,12},   //
        {13,14,15,0}    // = 16
    };
    
    int expectedValueOfSum = 16;
    int actualValueOfSum = sumOfWhiteMinusBlackSquares(numbers);
    
    if (expectedValueOfSum != actualValueOfSum)
    {
        cout << "TEST FAILED! Expected: " << expectedValueOfSum << " got: " << actualValueOfSum << endl;
    }
    else
    {
        cout << "sumOfWhiteMinusBlackSquares test passed!" << endl;
    }
    
    
    cout << "Beginning tests." << endl;
    
    // CLASS TESTS

    // Arrange
    int luckyDivisor = 3;
    int numberToCheck = 9;
    string expectedResult = "This number is lucky";
    
    // Act
    LuckyNumberChecker luckyNumberChecker(luckyDivisor);
    string actualResult = luckyNumberChecker.checkNumber(numberToCheck);
    
    // Assert
    if (expectedResult != actualResult)
    {
        cout << "TEST FAILED! Expected: " << expectedResult << " got: " << actualResult << endl;
    }

    int secondNumberToCheck = 11;
    string secondExpectedResult = "This number might be lucky";
    string secondActualResult = luckyNumberChecker.checkNumber(secondNumberToCheck);
    // Assert
    if (secondExpectedResult != secondActualResult)
    {
        cout << "TEST FAILED! Expected: " << secondExpectedResult << " got: " << secondActualResult << endl;
    }
    
    int thirdNumberToCheck = 2;
    string thirdExpectedResult = "This number is not lucky";
    string thirdActualResult = luckyNumberChecker.checkNumber(thirdNumberToCheck);
    
    if (thirdExpectedResult != thirdExpectedResult)
    {
        cout << "TEST FAILED: Expected: " << thirdExpectedResult << " got: " << thirdActualResult << endl;
    }
    
    return 0;
}
