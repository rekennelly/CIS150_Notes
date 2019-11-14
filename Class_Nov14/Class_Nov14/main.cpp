//
//  main.cpp
//  Class_Nov14
//
//  Created by Rachel Kennelly on 11/14/19.
//

#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
    Car(string color, double gasTankCapacityInLiters, double kilometersPerLiter, string make, string model) // constructor function
    {
        this->numberOfWheels = 4;
        this->gasInTankInLiters = 0;
        this->make = make;
        this->model = model;
        setColor(color);
        setGasTankCapacityInLiters(gasTankCapacityInLiters);
        setKilometersPerLiter(kilometersPerLiter);

    }
    
    void addGas(double litersOfGas)
    {
        if (litersOfGas > 0)
        {
            gasInTankInLiters += litersOfGas;
            if (gasInTankInLiters > gasTankCapacityInLiters)
            {
                gasInTankInLiters = gasTankCapacityInLiters;
                cout << "You spilled some gas!" << endl;
            }
        }
    }
    
    void drive(double kilometers)
    {
        if (kilometers > 0)
        {
            gasInTankInLiters -= kilometers / kilometersPerLiter;
            if (gasInTankInLiters <= 0)
            {
                gasInTankInLiters = 0;
                cout << "You ran out of gas!" << endl;
            }
        }
    }
    
    // Set Methods
    void setGasTankCapacityInLiters(double liters)
    {
        if (liters > 0)
        {
            gasTankCapacityInLiters = liters;
        }
    }
    
    void setColor(string color)
    {
        this->color = color;        // this-> means class level attribute ("shadowing")
    }
    
    void setKilometersPerLiter(double kilometersPerLiter)
    {
        if (kilometersPerLiter > 0)
        {
            this->kilometersPerLiter = kilometersPerLiter;
        }
    }
    
    // Get Methods
    double getGasInTankInLiters()
    {
        return gasInTankInLiters;
    }
    
    
    
private:
    int numberOfWheels;
    string color;
    double gasTankCapacityInLiters;
    double gasInTankInLiters;
    double kilometersPerLiter;
    string make;
    string model;
};

//void bell()
//{
//    cout << "Bell here!" << endl;
//}
//
//void bar()
//{
//    cout << "Bar here!" << endl;
//    bell();
//}
//void foo()
//{
//    cout << "Foo here!" << endl;
//    bar();
//}

/*******************************************/
/********* OVERLOADING FUNCTIONS ***********/
/*******************************************/

int calculateMinutes(double hours, double minutes)
{
    return hours * 60 + minutes;
}

int calculateMinutes(int hours, int minutes)
{
    return hours * 60 + minutes;
}

int calculateMinutes(string hours, string minutes)
{
    return calculateMinutes(stoi(hours), stoi(minutes));
}

/*******************************************/
/*********       RECURSION       ***********/
/*******************************************/

void countDown(int number)
{
    cout << number << endl;
    if (number > 0)
    {
        countDown(number - 1);
    }
}

int main() {
//    foo();
//    countDown(1000);

    Car equinox("storm blue", 45.42, 10.82, "chevrolet", "equinox");
//    equinox.setColor("storm blue");
//    equinox.setGasTankCapacityInLiters(45.42);
//    equinox.setKilometersPerLiter(10.82);
    
    equinox.addGas(20);
    equinox.drive(250);
    
    return 0;
}
