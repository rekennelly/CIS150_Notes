////
////  main.cpp
////  Class_Oct3
////
////  Created by Rachel Kennelly on 10/3/19.
////
//
//// *** PSEUDOCODE FOR PROJECT 1 SOLUTION ***
//// total income
//    // ask for income, and add it to the total
//    // ask for more income until they tell us 0
//
//// ask if they want to use the standard deduction
//    // if yes - AGI = total income - 12200
//    // if no - AGI = total income
//    // start asking for deductions and agi -= deduction
//        // loop until they tell us 0 for deduction
//
//// if 0 < agi < 9700
//    // taxesOwedat10% = agi * .1
//// else if agi > 9700
//    // taxesOwedat10% = 9700 * .1
//// else
//    // taxesOwedat10% = 0
//
//// if 9700 < agi < 39475
//    // taxesOwedat12% = (agi - 9700) * .12
//// else if agi > 39475
//    // taxesOwedat12% = (39475 - 9700) * .12
//// else
//    // taxesOwedat12% = 0
//
//// totalTaxesOwed = taxesOwedAt10% + taxesOwedAt12% + ...
//// taxesAsPercentageOfAGI = totalTax / AGI
//// taxesAsPercentageOfGrossIncome = totalTax / totalIncome
//
//
//// method 3 (preferred)
//// incomeToBeTaxed = AGI
//
//// if incomeToBeTaxed > 510300
//    // taxesat37% = (incomeToBeTaxed - 510300) * .37
//    // incomeToBeTaxed = 510300
//// if incomeToBeTaxed > 204100
//    // taxesat35% = (incomeToBeTaxed - 204100) * .35
//    // incomeToBeTaxed = 204100
//// if incomeToBeTaxed > 160725
//    // taxesat32% = (incomeToBeTaxed - 160725) * .32
//    // incomeToBeTaxed = 160725
//// if incomeToBeTaxed > 84200
//    // taxesat24% = (incomeToBeTaxed - 84200) * .24
//    // incomeToBeTaxed = 84200
//...

#include <iostream>

using namespace std;

int main() {
    const int START_OF_10_PERCENT_BRACKET = 0;
    const int START_OF_12_PERCENT_BRACKET = 9700;
    const int START_OF_22_PERCENT_BRACKET = 39475;
    const int START_OF_24_PERCENT_BRACKET = 84200;
    const int START_OF_32_PERCENT_BRACKET = 160725;
    const int START_OF_35_PERCENT_BRACKET = 204100;
    const int START_OF_37_PERCENT_BRACKET = 510300;
    
    const int STANDARD_DEDUCTION = 12200;
    
    int taxesOwedAt10Percent = 0;
    int taxesOwedAt12Percent = 0;
    int taxesOwedAt22Percent = 0;
    int taxesOwedAt24Percent = 0;
    int taxesOwedAt32Percent = 0;
    int taxesOwedAt35Percent = 0;
    int taxesOwedAt37Percent = 0;
    
    double grossIncome = 0;
    double adjustedGrossIncome = 0;
    
    int income = -1;
    while (income != 0)
    {
        cout << "Enter your income or 0 to stop" << endl;
        cin >> income;
        grossIncome += income;
    }
    
    char useStandardDeduction;
    cout << "Do you want to use the standard deduction? Y/N" << endl;
    cin >> useStandardDeduction;
    adjustedGrossIncome = grossIncome;
    
    if ( toupper(useStandardDeduction == 'Y') ) {
        adjustedGrossIncome -= STANDARD_DEDUCTION;
    }
    else {
        adjustedGrossIncome = grossIncome;
        int deduction = -1;
        while (deduction != 0) {
            cout << "Enter an itemized deduction or 0 to stop" << endl;
            cin >> deduction;
            adjustedGrossIncome -= deduction;
        }
    }
    
    double incomeToBeTaxed = adjustedGrossIncome;
    
    if (incomeToBeTaxed > START_OF_37_PERCENT_BRACKET)
    {
        taxesOwedAt37Percent = (incomeToBeTaxed - START_OF_37_PERCENT_BRACKET) * .37;
        incomeToBeTaxed = START_OF_37_PERCENT_BRACKET;
    }
    
    if (incomeToBeTaxed > START_OF_35_PERCENT_BRACKET)
    {
        taxesOwedAt35Percent = (incomeToBeTaxed - START_OF_35_PERCENT_BRACKET) * .35;
        incomeToBeTaxed = START_OF_35_PERCENT_BRACKET;
    }
    
    if (incomeToBeTaxed > START_OF_32_PERCENT_BRACKET)
    {
        taxesOwedAt32Percent = (incomeToBeTaxed - START_OF_32_PERCENT_BRACKET) * .32;
        incomeToBeTaxed = START_OF_32_PERCENT_BRACKET;
    }
    
    if (incomeToBeTaxed > START_OF_24_PERCENT_BRACKET)
    {
        taxesOwedAt24Percent = (incomeToBeTaxed - START_OF_24_PERCENT_BRACKET) * .24;
        incomeToBeTaxed = START_OF_24_PERCENT_BRACKET;
    }
    
    if (incomeToBeTaxed > START_OF_22_PERCENT_BRACKET)
    {
        taxesOwedAt22Percent = (incomeToBeTaxed - START_OF_22_PERCENT_BRACKET) * .22;
        incomeToBeTaxed = START_OF_22_PERCENT_BRACKET;
    }
    
    if (incomeToBeTaxed > START_OF_12_PERCENT_BRACKET)
    {
        taxesOwedAt12Percent = (incomeToBeTaxed - START_OF_12_PERCENT_BRACKET) * .12;
        incomeToBeTaxed = START_OF_12_PERCENT_BRACKET;
    }
    
    if (incomeToBeTaxed > START_OF_10_PERCENT_BRACKET)
    {
        taxesOwedAt10Percent = (incomeToBeTaxed - START_OF_10_PERCENT_BRACKET) * .10;
        incomeToBeTaxed = START_OF_10_PERCENT_BRACKET;
    }
    
    double totalTaxes = taxesOwedAt37Percent
    + taxesOwedAt35Percent
    + taxesOwedAt32Percent
    + taxesOwedAt24Percent
    + taxesOwedAt22Percent
    + taxesOwedAt12Percent
    + taxesOwedAt10Percent;
    
    double taxesOwedAsPercentageOfAGI = totalTaxes / adjustedGrossIncome;
    double taxesOwedAsPercentageOfGrossIncome = totalTaxes / grossIncome;
    
    cout << "Taxes owed at 10%: $" << taxesOwedAt10Percent << endl;
    cout << "Taxes owed at 12%: $" << taxesOwedAt12Percent << endl;
    cout << "Taxes owed at 22%: $" << taxesOwedAt22Percent << endl;
    cout << "Taxes owed at 24%: $" << taxesOwedAt24Percent << endl;
    cout << "Taxes owed at 32%: $" << taxesOwedAt32Percent << endl;
    cout << "Taxes owed at 35%: $" << taxesOwedAt35Percent << endl;
    cout << "Taxes owed at 37%: $" << taxesOwedAt37Percent << endl;
    
    cout << "Total taxes owed: $" << totalTaxes << endl;
    cout << "Taxes owed as a percentage of AGI: " << taxesOwedAsPercentageOfAGI * 100 << "%" << endl;
    cout << "Taxes owed as a percentage of gross income: " << taxesOwedAsPercentageOfGrossIncome * 100 << "%" << endl;
    
    
    return 0;
}
