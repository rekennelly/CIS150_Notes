//
//  main.cpp
//  Class_Oct3
//
//  Created by Rachel Kennelly on 10/3/19.
//  Copyright © 2019 Rachel Kennelly. All rights reserved.
//

#include <iostream>

using namespace std;

int taxesOwedAtGivenBracket(double incomeToBeTaxed, double startOfBracket, double taxRate) {
    double taxesOwed = (incomeToBeTaxed - startOfBracket) * taxRate;
    return taxesOwed;
}

int main() {
    return 0;
}
