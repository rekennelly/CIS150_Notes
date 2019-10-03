//
//  main.cpp
//  Class_Oct1
//
//  Created by Rachel Kennelly on 10/1/19.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    
    srand(time(0));
    
    char again = 'Y';
    
    while (again == 'Y') {
        for ( int repetition = 0; repetition < 10; repetition++)
        {
            cout << "You rolled a: " << rand() % 6 + 1 << endl;
        }
        
        cout << "Do you want to do this again? Y/N" << endl;
        cin >> again;
        again = toupper(again);
    }
    
    return 0;
}
