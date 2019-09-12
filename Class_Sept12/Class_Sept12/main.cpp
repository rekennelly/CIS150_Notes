//
//  main.cpp
//  Class_Sept12
//
//  Created by Rachel Kennelly on 9/12/19.
//

#include <iostream>
#include <string>

using namespace std;


/***************************
  Learning about pseudocode
 
int diceGame(int guess) {
    Die1 is random 1-6
    Die2 is random 1-6
    Ask user for guess
    Store user input
    Output sum of Die1 + Die2
}
 ***************************/
/*
int diceGame(int guess) {
    int die1;
    int die2;
    int diceSum;
    
    // Get random values for dice
    die1 = (rand() % 6) + 1;
    die2 = (rand() % 6) + 1;
    
    // Calculate sum of dice
    diceSum = die1 + die2;
    
    return diceSum;
}
 */

int main() {
    /*
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
    
    */
    
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
    
    // Using getline allows us to use spaces unlike cin
    
    cout << "Enter a name: " << endl;
    getline(cin, madlibName);

    cout << "Enter a theme: " << endl;
    getline(cin, madlibTheme);
    
    cout << "Enter a place: " << endl;
    getline(cin, madlibPlace);
    
    cout << "Enter a day of the week: " << endl;
    getline(cin, madlibDay);
    
    cout << "Enter a time: " << endl;
    getline(cin, madlibTime);
    
    cout << "Enter a verb: " << endl;
    getline(cin, madlibVerb);
    
    cout << "Enter an animal: " << endl;
    getline(cin, madlibAnimal);
    
    cout << "Let's see how your madlib turned out!" << endl << endl;
    cout << madlibName << " is having a " << madlibTheme << " party!" << endl;
    cout << "It's going to be at " << madlibPlace << " on " << madlibDay << "." << endl;
    cout << "Please show up at " << madlibTime << " or else you will be required to " << madlibVerb << " a " << madlibAnimal << "." << endl;

    
    
    return 0;
}
