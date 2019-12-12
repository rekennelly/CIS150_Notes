//
//  main.cpp
//  Class_Dec5
//
//  Created by Rachel Kennelly on 12/10/19.
//

#include "enigma.h"
#include <iostream>


using namespace std;

int main()
{
    int rotorNumber1;
    int rotorNumber2;
    int rotorNumber3;
    
    int rotor1Position;
    int rotor2Position;
    int rotor3Position;
    
    cout << "Enter the 3 rotor numbers you want to use: " << endl;
    cin >> rotorNumber1;
    cin >> rotorNumber2;
    cin >> rotorNumber3;
    
    cout << "Enter the 3 rotor positions you want to use: " << endl;
    cin >> rotor1Position;
    cin >> rotor2Position;
    cin >> rotor3Position;
    
    string message;
    string result;
    
    Enigma enigma(vector<int> {rotorNumber1,rotorNumber2,rotorNumber3},
                  vector<int> {rotor1Position, rotor2Position, rotor3Position});
    
    cout << "Enter a message to encode: " << endl;
    cin >> message;
    
    result = enigma.translate(message);
    
    cout << result << endl;
    
    return 0;
}
