#ifndef MAIN_CPP_MYVECTORS_H
#define MAIN_CPP_MYVECTORS_H
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
class MyVectors
{
public :
    vector <string> FirstNumber;
    vector <string> SecondNumber;
    vector <string> SumVector;
    int BiggerNumber;
    void ConvertNumbersStringToVector (string FirstStr, string SecondStr);
    vector <string> MakeSumVector (string FirstStr, string SecondStr);
};
#endif //MAIN_CPP_MYVECTORS_H
