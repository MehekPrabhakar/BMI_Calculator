// BMI_Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //BMI Calculator
    //BMI = weight(kg)/(height*height(m))
    //Underweight < 18.5
    //normal weight = 18.5-24.9
    //overweight > 25

    float weight;
    float height;

    cout << "Enter you weight(in kg): " << endl;
    cin >> weight;

    cout << "Enter your height(in m): " << endl;
    cin >> height;

    float BMI;
    BMI = weight / (height * height);
    cout << "Your BMI is " << BMI << endl;

    if (BMI < 18.5)
    {
        cout << "You're Underweight";
    }
    else {
        if (BMI > 25)
        {
            cout << "You're overweight";
        }
        else
        {
            cout << "Normal Weight";
        }
    }

    system("pause>0");
}