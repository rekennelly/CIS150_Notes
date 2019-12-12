//
//  main.cpp
//  Class_Nov19
//
//  Created by Rachel Kennelly on 11/19/19.
//

#include <iostream>
#include "Square.h"

using namespace std;

int main()
{
    Square smallSquare;
    smallSquare.setWidth(5);
    cout << "The area of a square with a width of " << smallSquare.getWidth() << " is " << smallSquare.getArea() << endl;
    
    return 0;
}
