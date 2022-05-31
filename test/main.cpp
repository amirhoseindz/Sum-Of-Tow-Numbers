#include <iostream>
#include <string>
#include <vector>
#include "../include/MyFunctions.h"
using namespace std;
int main()
{
    string FirstString;
    string SecondString;
    cout << "please enter your first number : " << endl;
    cin >> FirstString;
    cout << "please enter your second number : " << endl;
    cin >> SecondString;
    int BiggerNumber;
    if ((FirstString.size() > SecondString.size()) || (FirstString.size() == SecondString.size()))
    {
        BiggerNumber = FirstString.size();
    }
    else
    {
        BiggerNumber = SecondString.size();
    }
    vector <string> SumVector = MakeSumVector(FirstString, SecondString, BiggerNumber);
    for (int i = SumVector.size() - 1; i >= 0; i--)
    {
        cout << SumVector.at(i);
    }
}