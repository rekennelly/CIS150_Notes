//
//  main.cpp
//  Class_Dec3
//
//  Created by Rachel Kennelly on 12/10/19.
//  Copyright © 2019 Rachel Kennelly. All rights reserved.
//

#include <iostream>

using namespace std;

// int number = 42
// number = 42 stored at x36f2 (through 5)
// pass by value makes a new copy
// pass by reference gives the memory address
// pointer is a variable that stores a memory address

class LinkedNumber
{
public:
    LinkedNumber(int number)
    {
        this->number = number;
        next = nullptr;
    }
    
    void setNext(LinkedNumber& next)
    {
        this->next = &next;
    }
    
    int getNumber()
    {
        return number;
    }
    
    LinkedNumber* getNext()
    {
        return next;
    }
    
private:
    LinkedNumber* next;
    int number;
};

class LuckyNumber
{
public:
    LuckyNumber(int number = 42)
    {
        this->number = number;
    }
    
    int getNumber()
    {
        return number;
    }
    
private:
    int number;
};

int main()
{
    int number = 42;                    // number at, say, x37ab = 42
    int* anotherNumber = nullptr;       // at say, x38fc
    anotherNumber = &number;            // x38fc = x37ab
    
    cout << "Number: " << number << endl;
    cout << "anotherNumber: " << anotherNumber << endl;
    cout << "(*anotherNumber): " << *anotherNumber << endl;
    
    number = 10;
    
    cout << "Number: " << number << endl;
    cout << "anotherNumber: " << anotherNumber << endl;
    cout << "(*anotherNumber): " << *anotherNumber << endl;
    
    (*anotherNumber) = 20;
    
    cout << "Number: " << number << endl;
    cout << "anotherNumber: " << anotherNumber << endl;
    cout << "(*anotherNumber): " << *anotherNumber << endl;
    
    anotherNumber = new int(777);
    
    cout << "Number: " << number << endl;
    cout << "anotherNumber: " << anotherNumber << endl;
    cout << "(*anotherNumber): " << *anotherNumber << endl;
    
    LuckyNumber myLuckyNumber = LuckyNumber(12);
    
    LuckyNumber* anotherLuckyNumber = new LuckyNumber(13);
    
    cout << "myLuckyNumber.getNumber(): " << myLuckyNumber.getNumber() << endl;
    cout << "anotherLuckyNumber->getNumber(): " << anotherLuckyNumber->getNumber() << endl;
    cout << "(*anotherLuckyNumber).getNumber(): " << (*anotherLuckyNumber).getNumber() << endl;
    
    
    LinkedNumber* first = new LinkedNumber(0);
    LinkedNumber* current = first;
    for (int number = 1; number <= 100; number *= 2)
    {
        LinkedNumber* next = new LinkedNumber(number);
        current->setNext((*next));
        current = next;
    }
    
    current = first;
    while (current != nullptr)
    {
        cout << current->getNumber() << endl;
        current = current->getNext();
    }
    
    cout << first->getNumber() << endl;
    
    LuckyNumber thirdLuckyNumber(myLuckyNumber.getNumber());
    
    
    return 0;
}
