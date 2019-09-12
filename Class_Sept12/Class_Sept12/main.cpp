//
//  main.cpp
//  Class_Sept12
//
//  Created by Rachel Kennelly on 9/12/19.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    // Single quote or apostrophe for characters
    char myFirstLetter = 'E';
    char mySecondLetter = 'R';
    char myThirdLetter = 'I';
    char myFourthLetter = 'C';
    
    // double quotes for strings
    // \t adds a tab
    // \" adds quotation marks in a string
    
    // \n adds a new line, but it is UGLY
    string name = "Hassan \"Z\" Z";
    
    // string classroom = "Hassan \nEric \nRachel";
    // cout << classroom << endl;
    
    string ericsName = "Eric \"Mr. C\"";
    string rachelsName = "Rachel";
    
    myFourthLetter = 'E';
    
    cout << myFirstLetter << mySecondLetter << myThirdLetter << myFourthLetter << endl;
    
    cout << name << endl << ericsName << endl << rachelsName << endl;
    
    cout << "Enter your name: " << endl;
    
    cin >> name;
    
    cout << "Hi there, " << name << endl << endl;
    
    /* ***********
     *  Madlibs  *
     *************/
    
    cout << "Let's make a madlib!" << endl;
    
    string madlibName;
    string madlibTheme;
    string madlibPlace;
    string madlibDay;
    string madlibTime;
    string madlibVerb;
    string madlibAnimal;
    
    cout << "Enter a name: " << endl;
    cin >> madlibName;
    
    cout << "Enter a theme: " << endl;
    cin >> madlibTheme;
    
    cout << "Enter a place: " << endl;
    cin >> madlibPlace;
    
    cout << "Enter a day of the week: " << endl;
    cin >> madlibDay;
    
    cout << "Enter a time: " << endl;
    cin >> madlibTime;
    
    cout << "Enter a verb: " << endl;
    cin >> madlibVerb;
    
    cout << "Enter an animal: " << endl;
    cin >> madlibAnimal;
    
    cout << "Let's see how your madlib turned out!" << endl << endl;
    cout << madlibName << " is having a " << madlibTheme << " party!" << endl;
    cout << "It's going to be at " << madlibPlace << " on " << madlibDay << "." << endl;
    cout << "Please show up at " << madlibTime << " or else you will be required to " << madlibVerb << " a " << madlibAnimal << "." << endl;
    
    return 0;
}
