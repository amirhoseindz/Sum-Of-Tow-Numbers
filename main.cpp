#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector <string> MakeFirstNumberVector(string FirstStr)
{
    vector <string> FirstNumber;
    int LastElementOfString = FirstStr.size() - 1;
    for (int i = 0; i < FirstStr.size(); i++)
    {
        string FirstVectorElement(1, FirstStr[LastElementOfString - i]);
        FirstNumber.push_back(FirstVectorElement);
    }
    return FirstNumber;
}
vector <string> MakeSecondNumberVector(string SecondStr)
{
    vector <string> SecondNumber;
    int LastElementOfString = SecondStr.size() - 1;
    for (int i = 0; i < SecondStr.size(); i++)
    {
        string SecondVectorElement(1, SecondStr[LastElementOfString - i]);
        SecondNumber.push_back(SecondVectorElement);
    }
    return SecondNumber;
}
vector <string> MakeSumVector(string FirstStr, string SecondStr)
{
    vector <string> FirstNumber = MakeFirstNumberVector(FirstStr);
    vector <string> SecondNumber = MakeSecondNumberVector(SecondStr);
    vector <string> SumVector;
    int c = 0;
    for (int i = 0; i < FirstNumber.size(); i++)
    {
        int temp = stoi(FirstNumber.at(i)) + stoi(SecondNumber.at(i));
        if ( (FirstStr.size()==1) && (SecondStr.size() == 1) )
        {
            SumVector.push_back(to_string(temp));
        }
        else if (temp >= 10)
        {
            SumVector.push_back(to_string((temp - 10) + c ));
            c = 1;
        }
        else if (temp < 10)
        {
            SumVector.push_back(to_string(temp + c));
            c = 0;
        }
    }
    return SumVector;
}
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