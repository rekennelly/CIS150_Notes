//
//  main.cpp
//  Class_Oct24
//
//  Created by Rachel Kennelly on 10/29/19.
//  Copyright © 2019 Rachel Kennelly. All rights reserved.
//

#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFileStream;
    inputFileStream.open("words.txt");
    
    if (!inputFileStream.is_open())
    {
        cout << "Can't find words.txt" << endl;
        return 1;
    }
    
    vector<string> words;
    
    while (!inputFileStream.eof())
    {
        string line;
        getline(inputFileStream, line);
        words.push_back(line);
    }
    
    inputFileStream.close();
    
    ofstream outputFileStream;
    outputFileStream.open("sortedWords.txt");
    
    if (!outputFileStream.is_open())
    {
        cout << "Can't open file sortedWords.txt!" << endl;
        return 1;
    }
     
    for (int repetition = 0; repetition < words.size(); repetition++) {
        
        int smallestWordIndex = 0;
        
        for (int index = 0; index < words.size(); index++)   // for ( item : items )
        {
            if (words.at(index) != "")
            {
                if (words.at(smallestWordIndex) == "")
                {
                    smallestWordIndex = index;
                }
                 else if (words.at(index).length() < words.at(smallestWordIndex).length())
                {
                    smallestWordIndex = index;
                }
            }
        }
        outputFileStream << words.at(smallestWordIndex) << endl;
        words.at(smallestWordIndex) = "";

    }
    
    outputFileStream.close();
    
    return 0;
}
