//
//  enigma.h
//  Class_Dec5
//
//  Created by Rachel Kennelly on 12/10/19.
//

#pragma once
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

class Rotor
{
public:
    Rotor(int seed = 0)
    {
        srand(seed);
        position = 1;
        string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        while (alphabet.length() > 0)
        {
            char firstCharacter = alphabet.at(0);
            int randomIndex = rand() % (alphabet.length() - 1) + 1;
            char secondCharacter = alphabet.at(randomIndex);
            vector<char> pair = {firstCharacter, secondCharacter};
            pairs.push_back(pair);
            vector<char> secondPair = {secondCharacter, firstCharacter};
            pairs.push_back(secondPair);
            
            alphabet.replace(randomIndex, 1, "");
            alphabet.replace(0, 1, "");
        }
    }
    
    char translate(char inputCharacter)
    {
        for (int index = 0; index < pairs.size(); index++)
        {
            if (pairs.at(index).at(0) == toupper(inputCharacter))
            {
                return pairs.at(index).at(1);
            }
        }
        
        return inputCharacter;
    }
    
    void rotate(int times = 1)
    {
        for (int index = 0; index < pairs.size(); index++)
        {
            pairs.at(index).at(0) = pairs.at(index).at(0) + 1;
            pairs.at(index).at(1) = pairs.at(index).at(1) + 1;
            
            if (pairs.at(index).at(0) > 'Z')
            {
                pairs.at(index).at(0) -= 26;
            }
            
            if (pairs.at(index).at(1) > 'Z')
            {
                pairs.at(index).at(1) -= 26;
            }
        }
        position += times;
        if (position > 26)
        {
            position -= 26;
        }
    }
    
    int getPosition()
    {
        return position;
    }
    
private:
    vector<vector<char>> pairs;
    int position;
};

class Enigma
{
public:
    Enigma(vector<int> rotorNumbers, vector<int> startingPositions)
    {
        for (int index = 0; index < rotorNumbers.size(); index++)
        {
            Rotor rotor(rotorNumbers.at(index));
            rotor.rotate(startingPositions.at(index));
            rotors.push_back(rotor);
        }
        rotors.push_back(Rotor());
    }
    
    string translate(string toTranslate)
    {
        string toReturn = "";
        for (char letter : toTranslate)
        {
            for (int rotorIndex = 0; rotorIndex < rotors.size(); rotorIndex++)
            {
                letter = rotors.at(rotorIndex).translate(letter);
            }
            for (int rotorIndex = rotors.size() - 2; rotorIndex >= 0; rotorIndex--)
            {
                letter = rotors.at(rotorIndex).translate(letter);
            }
            toReturn += letter;
            
            rotors.at(0).rotate();
            if (rotors.at(0).getPosition() == 1)
            {
                rotors.at(1).rotate();
                if (rotors.at(1).getPosition() == 1)
                {
                    rotors.at(2).rotate();
                }
            }
        }
        return toReturn;
    }
    
private:
    vector<Rotor> rotors;
};
