#include <stdio.h>
#include <iostream>
#include <stack>
#include <string>
#include <array>

using namespace std;

// no extra memory used
void removeDublicates(string& str)
{
    if(str == "") return;
    if(str.size() < 2) return;
    
    bool same = false;
    int tail = 1;
    
    for(int i=1; i<str.size(); ++i)
    {
        for(int j=0; j<tail; ++j)
        {
            if(str[i] == str[j])
            {
                //cout << str[i] << endl;
                same = true;
                break;
            }
            else
                same = false;
        }
        if(!same)
        {
            str[tail] = str[i];
            ++tail;
        }
    }
    
    str = str.substr(0,tail);
    
    return;
}

int main()
{
    string str = "aaabbbeacafcca";
    //string str = "aaabbb";
    removeDublicates(str);
    cout << "returnStr: " << str << endl;

    return 0;
}
