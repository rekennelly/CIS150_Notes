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
    
    /********************
     *** NEXT EXAMPLE ***
     *******************/
    
    int age;
    
    cout << "Enter your age: " << endl;
    cin >> age;
    
//    This method works, but it is inefficient
//    
//    if (age >= 18) {
//        cout << "You can vote!" << endl;
//        if (age >= 21) {
//            cout << "You can buy alcohol!" << endl;
//            if (age >= 23) {
//                cout << "You can rent a car!" << endl;
//            }
//            else {
//                cout << "You can't rent a car!" << endl;
//            }
//        }
//    }
//    else {
//        cout << "You can't vote!" << endl;
//        cout << "You can't buy alcohol!" << endl;
//        cout << "You can't rent a car!" << endl;
//    }
    
    if (age >= 23) {
        cout << "You can rent a car!" << endl;
    }
    else {
        cout << "You can't rent a car!" << endl;
    }
    if (age >= 21) {
        cout << "You can buy alcohol!" << endl;
    }
    else {
        cout << "You can't buy alcohol!" << endl;
    }
    if (age >= 18) {
        cout << "You can vote!" << endl;
    }
    else {
        cout << "You can't vote!" << endl;
    }
    

    /********************
     *** NEXT EXAMPLE ***
     *******************/
    // What should I wear today?
    
    int temperature;
    char isRaining;
    
    cout << "What's the temperature?" << endl;
    cin >> temperature;
    
    cout << "Is it raining? Y/N" << endl;
    cin >> isRaining;
    
    if (temperature >= 50) {
        cout << "You can wear short sleeves." << endl;
    }
    else if (temperature > 32) {
        cout << "You might want a jacket." << endl;
    }
    else {
        cout << "You should bring a coat." << endl;
    }
    
    if (isRaining == 'Y' || isRaining == 'y') {        // || is equivalent to 'or'
        cout << "Bring an umbrella!" << endl;
    }
    
    
    return 0;
}
