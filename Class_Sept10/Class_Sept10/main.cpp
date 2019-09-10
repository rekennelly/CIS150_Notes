//
//  main.cpp
//  Class_Sept10
//
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //******
    // next example
    //******
    
    double height;
    double base;
    double triangleArea;

    cout << "Enter the triangle height: " << endl;
    cin >> height;
    
    cout << "Enter the triangle base: " << endl;
    cin >> base;
    
    triangleArea = height * base * 0.5;
    
    cout << "The area of the triangle is " << triangleArea << endl;
    
    // *****
    // next example
    // *****
    
    const double PI = 3.14159;
    double radius;
    double circleArea;
    
    cout << endl;
    cout << "Enter the radius of your circle: " << endl;
    cin >> radius;
    
    // without cmath library
    // circleArea = radius * radius * PI;
    
    // with cmath library
    circleArea = pow(radius, 2) * PI;
    
    cout << "The area of your circle is about " << circleArea << endl;
    
    return 0;
}
