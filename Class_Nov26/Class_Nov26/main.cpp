//
//  main.cpp
//  Class_Nov26
//
//  Created by Rachel Kennelly on 11/26/19.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
//    int size;
//    cout << "Enter a size: " << endl;
//    cin >> size;
    
    int theAnswer = 42;
    int anotherAnswer = theAnswer;
    
    int* numberPointer = &theAnswer;
    
    cout << "theAnswer: " << theAnswer << endl;
    cout << "&theAnswer: " << &theAnswer << endl;
    
    cout << "numberPointer: " << numberPointer << endl;
    cout << "*numberPointer: " << *numberPointer << endl;
    
    cout << "anotherAnswer: " << anotherAnswer << endl;
    cout << "&anotherAnswer: " << &anotherAnswer << endl;
    
    cout << "What is the answer?" << endl;
    cin >> theAnswer;
    
    cout << "theAnswer: " << theAnswer << endl;
    cout << "&theAnswer: " << &theAnswer << endl;
    
    cout << "numberPointer: " << numberPointer << endl;
    cout << "*numberPointer: " << *numberPointer << endl;
    
    cout << "anotherAnswer: " << anotherAnswer << endl;
    cout << "&anotherAnswer: " << &anotherAnswer << endl;
    
    int numbers[10];
    int* numberDynamicArray = new int[theAnswer];
    
    cout << "numbers: " << numbers << endl;
    cout << "numberDynamicArray: " << numberDynamicArray << endl;
    
    for (int index = 0; index < 10; index++)
    {
        numbers[index] = index;
    }

    for (int index = 0; index < theAnswer; index++)
    {
        numberDynamicArray[index] = index;
    }
    
    for (int index = 0; index < theAnswer; index++)
    {
        cout << numberDynamicArray[index] << endl;
    }
    
    return 0;
}
