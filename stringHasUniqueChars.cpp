#include <stdio.h>
#include <iostream>
#include <stack>
#include <string>
#include <array>

using namespace std;

// standart version
bool uniqueCharString(string inputStr)
{
    bool stringUnique = true;
    
    // n2 complexity
    for(int i=0; i < (inputStr.size()-1); i++)
    {
        for(int j=(i+1); j < inputStr.size(); j++)
        {
            if(inputStr[i]==inputStr[j])
            {
                stringUnique = false;
                break;
            }
        }
        if(!stringUnique)
            break;
    }
    
    return stringUnique;
}

// ASCII version
bool uniqueCharString2(string inputStr)
{
    bool stringUnique = true;
    array<bool,256> charValue;
    charValue.fill(0);
    //bool* charValue = new bool(256);
    
    for(int i=0; i < (inputStr.size()); i++)
    {
        int index = inputStr[i] - ' ';
        if(charValue[index])
        {
            stringUnique = false;
            break;
        }
        charValue[index] = true;
    }
    
    return stringUnique;
}

int main()
{
    string s = "ali verbona";
    bool unique = uniqueCharString2(s);
    if(unique)
        std::cout << "string is unique\n";
    else
        std::cout << "string is not unique\n";
    
    return 0;
}
