#include <stdio.h>
#include <iostream>
#include <stack>
#include <string>
#include <array>
#include<bits/stdc++.h>

using namespace std;

void replaceForFun(char str[], int length)
{
    int spaceCounter = 0;
    int newLength = 0;
    for(int i=0; i<length; i++)
    {
        if(str[i] == ' ')
            ++spaceCounter;
    }
    
    newLength = length + spaceCounter*2;
    cout << newLength << endl;
    str[newLength] = '\0';

    for(int i=(length-1); i>=0; i--)
    {
        if(str[i] == ' ')
        {
            str[newLength-1] = '0';
            str[newLength-2] = '2';
            str[newLength-3] = '%';
            newLength = newLength - 3;
        }
        else
        {
            str[newLength-1] = str[i];
            --newLength;
        }
    }
}

int main()
{
    //string str1 = "aaabb b ea ca3fc ca1 2";
    //string str2 = "";
    char charArr[256] = "aaabb b ea ca3fc ca1 2";
    replaceForFun(charArr,23);
    cout << "str2: " << charArr << endl;

    return 0;
}
