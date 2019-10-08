//
//  main.cpp
//  Class_Oct8
//
//  Created by Rachel Kennelly on 10/8/19.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
// ^^ these are pre-processor directives

using namespace std;

int luckyNumber();
int doublyLuckyNumber(int number);
string capitalizeString(string name);

double getAverageScore(vector<int> scores);
double getMaxScore(vector<int> scores);
double getMinScore(vector<int> scores);
double getPopulationStandardDeviation(vector<int> scores);

// overloading the function -- 2 functions with same names & different parameters
void printTheDate(int day, int month, int year, int printStyle = 0) {
    if (printStyle == 0) {
        cout << month << "-" << day << "-" << year << endl;
    }
    else if (printStyle == 1) {
        cout << day << "-" << month << "-" << year << endl;
    }
    else {
        cout << year << "-" << month << "-" << day << endl;
    }
}

void printTheDate(string day, string month, string year, int printStyle = 0) {
    printTheDate(stoi(day), stoi(month), stoi(year), printStyle);
}

// avoid using global variables if you can

int main() {
//    
//    int usersNumber;
//    cout << "Pick a number, any number" << endl;
//    cin >> usersNumber;
//    
//    int luckyNumber;
//    
//    luckyNumber = doublyLuckyNumber(usersNumber);
//    
//    cout << luckyNumber << endl;
//    
//    cout << "Enter your name: ";
//    string name;
//    cin >> name;
//    
//    name = capitalizeString(name);
//    cout << name << endl;
    
    vector<int> scores;
    
    int score = 0;
    while (score != -1) {
        cout << "Enter a score or -1 to stop" << endl;
        cin >> score;
        if (score != -1) {
            scores.push_back(score);
        }
    }
    
    double averageScore = getAverageScore(scores);
    double minScore = getMinScore(scores);
    double maxScore = getMaxScore(scores);
    double standardDeviation = getPopulationStandardDeviation(scores);
    
    cout << "Average score: " << averageScore << endl;
    cout << "Min Score: " << minScore << endl;
    cout << "Max Score: " << maxScore << endl;
    cout << "Standard Deviation: " << standardDeviation << endl;
    
    printTheDate(8, 10, 2019);
    printTheDate(8, 10, 2019, 1);
    printTheDate(8, 10, 2019, 2);
    
    return 0;
}

int luckyNumber() {
    return doublyLuckyNumber(21);
}

int doublyLuckyNumber(int number) {
    return 2 * number;
}

string capitalizeString(string name) {
    name.at(0) = toupper(name.at(0));
    return name;
}

double getAverageScore(vector<int> scores) {
    double total = 0;
    for (int index = 0; index < scores.size(); index++ ) {
        total += scores.at(index);
    }
    return total / scores.size();
}

double getMinScore(vector<int> scores) {
    int minScore = scores.at(0);
    for (int index = 1; index < scores.size(); index++ ) {
        if (scores.at(index) < minScore) {
            minScore = scores.at(index);
        }
    }
    return minScore;
}

double getMaxScore(vector<int> scores) {
    int maxScore = scores.at(0);
    for (int index = 1; index < scores.size(); index++ ) {
        if (scores.at(index) > maxScore) {
            maxScore = scores.at(index);
        }
    }
    return maxScore;
}

double getPopulationStandardDeviation(vector<int> scores) {
    
    double averageScore = getAverageScore(scores);
    
    double totalOfDifferenceFromAverageSquared = 0;
    
    for (int index = 0; index < scores.size(); index++) {
        double difference = scores.at(index) - averageScore;
        double differenceSquared = difference * difference;
        
        totalOfDifferenceFromAverageSquared += differenceSquared;
    }
    
    double variance = totalOfDifferenceFromAverageSquared / scores.size();
    
    return sqrt(variance);
}
