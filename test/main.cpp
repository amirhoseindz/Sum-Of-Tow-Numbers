#include <iostream>
#include <string>
#include <vector>
#include "../lib/MyFunctions.cpp"
using namespace std;
int main()
{
    string FirstString;
    string SecondString;
    cout << "please enter your first number : " << endl;
    cin >> FirstString;
    cout << "please enter your second number : " << endl;
    cin >> SecondString;
    vector <string> SumVector = MakeSumVector(FirstString, SecondString);
    for (int i = SumVector.size() - 1; i >= 0; i--)
    {
        cout << SumVector.at(i);
    }
}