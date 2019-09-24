//
//  main.cpp
//  Class_Sept24
//
//  Created by Rachel Kennelly on 9/24/19.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    
    /* Example of Lab using While Loops
    
    int highestNumberToGuess;
    
    cout << "Enter the highest number you want to guess: " << endl;
    cin >> highestNumberToGuess;
    
    int maxNumberofGuess;
    cout << "How many guesses do you want before you lose?" << endl;
    cin >> maxNumberofGuess;
    
    srand(time(0));
    int numberToGuess = (rand() % highestNumberToGuess) + 1;
    
    int numberOfGuesses = 0;
    
    int guess = 0;
    
    while (guess != numberToGuess && numberOfGuesses != maxNumberofGuess) {
        cout << "Guess a number 1 to " << highestNumberToGuess << endl;
        cin >> guess;
        
        numberOfGuesses++;
        
        if (guess < numberToGuess) {
            cout << "Too low!" << endl;
        }
        else if (guess > numberToGuess) {
            cout << "Too high!" << endl;
        }
        else {
            cout << "You guessed it in " << numberOfGuesses << " guesses!" << endl;
            return 0;
        }
    }
        
    cout << "You lose!" << endl;
     
    */
    
    /************************
     ***** NEXT EXAMPLE *****
     ***** Running Total ****
     ***********************/
    
//    double total = 0;
//    double receiptAmount = 0;
//    
//    while (receiptAmount != -1) {
//        total += receiptAmount;
//        cout << "Enter the receipt amount (or -1 to stop): ";
//        cin >> receiptAmount;
//    }
//    
//    cout << "The total receipts are: " << total << endl;
//    
//    
//    // setting up values for while and for loops
//    total = 0;
//    
//    int numberOfReceipts;
//    cout << "How many receipts do you have? ";
//    cin >> numberOfReceipts;
//    
//    // using a for loop
//    // for (initializer ; condition ; what am I doing to my value)
//
//    
//    for (int numberofReceiptsEntered = 0;
//         numberofReceiptsEntered < numberOfReceipts;
//         numberofReceiptsEntered++)
//    {
//        cout << "Enter the receipt amount: ";
//        cin >> receiptAmount;
//        total += receiptAmount;
//    }
//    
//    // This version requires users to know how many receipts they have
//    // using a while loop without a sentinel value
//    
//    total = 0;
//    
//    int numberofReceiptsEntered = 0;
//    while (numberofReceiptsEntered != numberOfReceipts) {
//        cout << "Enter the receipt amount: ";
//        cin >> receiptAmount;
//        total += receiptAmount;
//        numberOfReceipts--;        // without this, it would be an infinite loop
//    }
//    
//    cout << "The total receipts are: " << total << endl;
    
    /************************
     ***** NEXT EXAMPLE *****
     **** Counting Vowels ***
     ***********************/
    
    string name;
    cout << "Enter your name: ";
    cin >> name;
    
    int numberOfVowels = 0;
    for (int index = 0; index < name.length(); index++) {
        char lowerCaseLetter = tolower(name[index]);
        if (lowerCaseLetter == 'a' ||
            lowerCaseLetter == 'e' ||
            lowerCaseLetter == 'i' ||
            lowerCaseLetter == 'o' ||
            lowerCaseLetter == 'u')
        {
            numberOfVowels++;
        }
        cout << name[index] << endl;
    }
    
    
    // same as for loop above
    int index = 0;
    
    while (index < name.length()) {
        char lowerCaseLetter = tolower(name[index]);
        if (lowerCaseLetter == 'a' ||
            lowerCaseLetter == 'e' ||
            lowerCaseLetter == 'i' ||
            lowerCaseLetter == 'o' ||
            lowerCaseLetter == 'u')
        {
           // don't double count
           // numberOfVowels++;
        }
        cout << name[index] << endl;
        index++;
    }
    
    cout << "There are " << numberOfVowels << " vowels in your name!" << endl;
    
    /************************
     ***** NEXT EXAMPLE *****
     ***** Nested Loops *****
     ***********************/
    
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    for (int firstLetterIndex = 0; firstLetterIndex < alphabet.length(); firstLetterIndex++) {
        for (int secondLetterIndex = 0; secondLetterIndex < alphabet.length(); secondLetterIndex++) {
            for (int thirdLetterIndex = 0; thirdLetterIndex < alphabet.length(); thirdLetterIndex++) {
                cout << alphabet[firstLetterIndex];
                cout << alphabet[secondLetterIndex];
                cout << alphabet[thirdLetterIndex];
                cout << ".com" << endl;
            }
        }
    }

    // If you know how many times you're doing it, use a for loop
    // Use can always use a while loop
    
    return 0;
}
