#ifndef MAIN_CPP_MYFUNCTIONS_H
#define MAIN_CPP_MYFUNCTIONS_H
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
    int Tens = 0;
    for (int i = 0; i < FirstNumber.size(); i++)
    {
        int temp = stoi(FirstNumber.at(i)) + stoi(SecondNumber.at(i));
        if ( (FirstStr.size()==1) && (SecondStr.size() == 1) )
        {
            SumVector.push_back(to_string(temp));
        }
        else if (temp >= 10)
        {
            SumVector.push_back(to_string((temp - 10) + Tens ));
            Tens = 1;
        }
        else if (temp < 10)
        {
            SumVector.push_back(to_string(temp + Tens));
            Tens = 0;
        }
    }
    return SumVector;
}
#endif //MAIN_CPP_MYFUNCTIONS_H
