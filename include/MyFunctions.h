#ifndef MAIN_CPP_MYFUNCTIONS_H
#define MAIN_CPP_MYFUNCTIONS_H
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
struct Vectors
{
    vector <string> FirstNumber;
    vector <string> SecondNumber;
    Vectors ConvertNumbersStringToVector(string FirstStr, string SecondStr, int BiggerNumber)
    {
        Vectors Numbers;
        int LastElementOfFirstNumberString = FirstStr.size() - 1;
        int LastElementOfSecondNumberString = SecondStr.size() - 1;
        for (int i = 0; i < FirstStr.size(); i++)
        {
            string FirstVectorElement(1, FirstStr[LastElementOfFirstNumberString - i]);
            FirstNumber.push_back(FirstVectorElement);
        }
        for (int i = 0; i < SecondStr.size(); i++)
        {
            string SecondVectorElement(1, SecondStr[LastElementOfSecondNumberString - i]);
            SecondNumber.push_back(SecondVectorElement);
        }
        if (BiggerNumber > FirstStr.size())
        {
            for (int i = 0; i < (BiggerNumber - FirstStr.size()); i++)
            {
                FirstNumber.emplace_back("0");
            }
        }
        if (BiggerNumber > SecondStr.size())
        {
            for (int i = 0; i < (BiggerNumber - SecondStr.size()); i++)
            {
                SecondNumber.emplace_back("0");
            }
        }
        return Numbers;
    }
};
vector <string> MakeSumVector(string FirstStr, string SecondStr, int BiggerNumber)
{
    Vectors Numbers;
    Numbers.ConvertNumbersStringToVector (std::move(FirstStr), std::move(SecondStr), BiggerNumber);
    vector <string> SumVector;
    int Tens = 0;
    for (int i = 0; i < BiggerNumber; i++)
    {
        int temp = (stoi(Numbers.FirstNumber.at(i)) + stoi(Numbers.SecondNumber.at(i))) + Tens ;
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
