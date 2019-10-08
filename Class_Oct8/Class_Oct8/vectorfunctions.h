//
//  vectorfunctions.h
//  Class_Oct8
//
//  Created by Rachel Kennelly on 10/8/19.
//
#include <vector>

using namespace std;

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
