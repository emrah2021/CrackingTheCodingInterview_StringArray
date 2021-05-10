#include <stdio.h>
#include <iostream>
#include <stack>
#include <string>
#include <array>

using namespace std;

string removeDublicates(string& str)
{
    stack<char> charStack;
    char controlChar;
    string returnStr = "";
    
    for(int i=0; i<str.size(); i++)
    {
        if((!charStack.empty()) || (i!=0))
        {
            if((!charStack.empty()) && (charStack.top() == str[i]))
                charStack.pop();
            else if(controlChar == str[i])
                continue;
            else 
            {
                charStack.push(str[i]);
                controlChar = str[i];
            }
        }
        else 
        {
            charStack.push(str[i]);
            controlChar = str[i];
        }
    }
    
    while(!charStack.empty())
    {
        returnStr = charStack.top() + returnStr;
        charStack.pop();
    }
    
    return returnStr;
}

int main()
{
    string str = "aaabbbacacca";
    string returnStr = removeDublicates(str);
    cout << "returnStr: " << returnStr << endl;

    return 0;
}
