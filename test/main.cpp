#include <iostream>
#include <string>
#include <vector>
#include "../include/MyVectors.h"
using namespace std;
int main()
{
    string FirstString;
    string SecondString;
    cout << "please enter your first number : " << endl;
    cin >> FirstString;
    cout << "please enter your second number : " << endl;
    cin >> SecondString;
    MyVectors SumVector;
    vector <string> sumVector = SumVector.MakeSumVector(FirstString, SecondString);
    for (int i = sumVector.size() - 1; i >= 0; i--)
    {
        cout << sumVector.at(i);
    }
}