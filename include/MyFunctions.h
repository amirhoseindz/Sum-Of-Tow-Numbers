#ifndef MAIN_CPP_MYFUNCTIONS_H
#define MAIN_CPP_MYFUNCTIONS_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector <string> MakeFirstNumberVector(string FirstStr, int BiggerNumber)
{
    vector <string> FirstNumber;
    int LastElementOfString = FirstStr.size() - 1;
    for (int i = 0; i < FirstStr.size(); i++)
    {
        string FirstVectorElement(1, FirstStr[LastElementOfString - i]);
        FirstNumber.push_back(FirstVectorElement);
    }
    if (BiggerNumber > FirstStr.size())
    {
        for (int i = 0; i < (BiggerNumber - FirstStr.size()); i++)
        {
            FirstNumber.emplace_back("0");
        }
    }
    return FirstNumber;
}
vector <string> MakeSecondNumberVector(string SecondStr, int BiggerNumber)
{
    vector <string> SecondNumber;
    int LastElementOfString = SecondStr.size() - 1;
    for (int i = 0; i < SecondStr.size(); i++)
    {
        string SecondVectorElement(1, SecondStr[LastElementOfString - i]);
        SecondNumber.push_back(SecondVectorElement);
    }
    if (BiggerNumber > SecondStr.size())
    {
        for (int i = 0; i < (BiggerNumber - SecondStr.size()); i++)
        {
            SecondNumber.emplace_back("0");
        }
    }
    return SecondNumber;
}
vector <string> MakeSumVector(string FirstStr, string SecondStr, int BiggerNumber)
{
    vector <string> FirstNumber = MakeFirstNumberVector(FirstStr, BiggerNumber);
    vector <string> SecondNumber = MakeSecondNumberVector(SecondStr, BiggerNumber);
    vector <string> SumVector;
    int Tens = 0;
    for (int i = 0; i < BiggerNumber; i++)
    {
        int temp = (stoi(FirstNumber.at(i)) + stoi(SecondNumber.at(i))) + Tens ;
        if ((temp >= 10) && (i == (BiggerNumber -1)))
        {
            SumVector.push_back(to_string(temp));
        }
        else if ((temp >= 10) && (i != (BiggerNumber -1)))
        {
            SumVector.push_back(to_string((temp - 10)));
            Tens = 1;
        }
        else if (temp < 10)
        {
            SumVector.push_back(to_string(temp));
            Tens = 0;
        }
    }
    return SumVector;
}
#endif
