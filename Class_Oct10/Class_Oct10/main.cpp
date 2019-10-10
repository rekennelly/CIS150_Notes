//
//  main.cpp
//  Class_Oct10
//
//  Created by Rachel Kennelly on 10/10/19.
//  Copyright © 2019 Rachel Kennelly. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int NUMBER_OF_NUMBERS = 5;
    
    int numbers[NUMBER_OF_NUMBERS];
    
    numbers[0] = 42;
    numbers[1] = 43;
    numbers[2] = 44;
    
    int howMany;
    cout << "Enter how many: ";
    cin >> howMany;
    
    // The following code will not work because arrays need
    // to know the size at run time
    // int someNumbers[howMany];
    
    <vector>int someNumbersThatWorks(howMany);
    
    for (int index = 0; index < NUMBER_OF_NUMBERS ; index++) {
        cout << numbers[index] << endl;
    }
    
    
    
    
    return 0;
}
