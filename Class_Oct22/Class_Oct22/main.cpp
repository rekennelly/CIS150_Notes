//
//  main.cpp
//  Class_Oct22
//
//  Created by Rachel Kennelly on 10/22/19.
//

#include <iostream>
#include <vector>
#include <iomanip>
#include <sstream> // string stream
#include <string>
#include <fstream> // file stream

using namespace std;

int main() {
    
//    string info = "Rachel Kennelly Computer & Information Science";
//    istringstream inputStringStream(info);
//    
//    string firstName;
//    string lastName;
//    string department;
//    
//    inputStringStream >> firstName;
//    inputStringStream >> lastName;
//    getline(inputStringStream, department);
//    
//    cout << firstName << lastName << department << endl;

    ifstream inputFileStream;
    vector<int> scores;
    
    string fileName;
    
    do {
        cout << "Enter a file name to open: ";
        cin >> fileName;
            
        inputFileStream.open(fileName);
        
        // make sure we found the file
        if (!inputFileStream.is_open())
        {
            cout << "Can't find the file!" << endl;
        }
    } while(!inputFileStream.is_open());
    
    
    int score;
    
    while (!inputFileStream.eof())  // eof is end of file, so while not the end of the file
    {
        inputFileStream >> score;
        scores.push_back(score);
        // make sure we close the file
    }
    
    inputFileStream.close();
    
    for (int index = 0; index < scores.size(); index++)
    {
        cout << scores.at(index) << endl;
    }
    
    

    return 0;
}
