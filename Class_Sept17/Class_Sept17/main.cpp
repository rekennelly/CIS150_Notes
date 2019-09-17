//
//  main.cpp
//  Class_Sept17
//
//  Created by Rachel Kennelly on 9/17/19.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
//    // Example solution for today's lab
//    double a;
//    double b;
//    double c;
//    
//    double xIntercept1;
//    double xIntercept2;
//    
//    double discriminant;
//    
//    cout << "Enter a: " << endl;
//    cin >> a;
//    
//    cout << "Enter b: " << endl;
//    cin >> b;
//    
//    cout << "Enter c: " << endl;
//    cin >> c;
//    
//    discriminant = b * b - 4 * a * c;
//    
//    if (discriminant >= 0) {
//        xIntercept1 = (-b + sqrt(discriminant)) / (2 * a);
//
//        xIntercept2 = (-b - sqrt(discriminant)) / (2 * a);
//
//        cout << "x intercepts are: " << xIntercept1 << " and " << xIntercept2 << endl;
//    }
//    else {
//        cout << "There are no roots!" << endl;
//    }
    
    /********************
     *** NEXT EXAMPLE ***
     *******************/
    // Calculating letter grade with
    // mutually exclusive if-else statements
    
    double percentage;
    
    cout << "Enter your final grade percentage: " << endl;
    cin >> percentage;
    
    if (percentage >= 93) {
        cout << "A" << endl;
    }
    else if (percentage >= 90) {
        cout << "A" << endl;
    }
    else if (percentage >= 87) {
        cout << "B+" << endl;
    }
    else if (percentage >= 83) {
        cout << "B" << endl;
    }
    else if (percentage >= 80) {
        cout << "B-" << endl;
    }
    else if (percentage >= 77) {
        cout << "C+" << endl;
    }
    else if (percentage >= 73) {
        cout << "C" << endl;
    }
    else if (percentage >= 70) {
        cout << "C-" << endl;
    }
    else if (percentage >= 67) {
        cout << "D+" << endl;
    }
    else if (percentage >= 63) {
        cout << "D" << endl;
    }
    else if (percentage >= 60) {
        cout << "D-" << endl;
    }
    else {
        cout << "F" << endl;
    }

    return 0;
}
