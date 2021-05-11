#include <stdio.h>
#include <iostream>
#include <stack>
#include <string>
#include <array>
#include<bits/stdc++.h>

using namespace std;

bool anagramStringsSort(string &inputStr1, string &inputStr2)
{
    bool anagramControl;
    
    sort(inputStr1.begin(), inputStr1.end());
    sort(inputStr2.begin(), inputStr2.end());
    
    if(inputStr1 == inputStr2)
        anagramControl = true;
    else
        anagramControl = false;
        
    return anagramControl;
}

bool anagramStrings(string &inputStr1, string &inputStr2)
{
    bool anagramControl = true;
    array<int,256> charCountArray;
    charCountArray.fill(0);
    
    for(int i=0; i<inputStr1.length(); i++)
    {
        int index = (int) inputStr1[i];
        charCountArray[index]++;
    }
    for(int i=0; i<inputStr2.length(); i++)
    {
        int index = (int) inputStr2[i];
        charCountArray[index]--;
    }
    for(int ins: charCountArray)
    {
        if(ins!=0)
        {
            anagramControl = false;
        }
    }
        
    return anagramControl;
}

int main()
{
    string str1 = "aaabbbeaca3fcca12";
    string str2 = "aaaebac4bafcbca21";
    bool anagram;
    anagram = anagramStrings(str1,str2);
    
    cout << "anagram: " << anagram << endl;

    return 0;
}
