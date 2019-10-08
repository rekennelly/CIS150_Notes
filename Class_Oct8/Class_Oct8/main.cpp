//
//  main.cpp
//  Class_Oct8
//
//  Created by Rachel Kennelly on 10/8/19.
//

#include <iostream>

using namespace std;

int luckyNumber();
int doublyLuckyNumber(int number);
string capitalizeString(string name);

int main() {
    
    int usersNumber;
    cout << "Pick a number, any number" << endl;
    cin >> usersNumber;
    
    int luckyNumber;
    
    luckyNumber = doublyLuckyNumber(usersNumber);
    
    cout << luckyNumber << endl;
    
    cout << "Enter your name: ";
    string name;
    cin >> name;
    
    name = capitalizeString(name);
    cout << name << endl;
    
    return 0;
}

int luckyNumber() {
    return doublyLuckyNumber(21);
}

int doublyLuckyNumber(int number) {
    return 2 * number;
}

string capitalizeString(string name) {
    name.at(0) = toupper(name.at(0));
    return name;
}
