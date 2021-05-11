#include <stdio.h>
#include <iostream>
#include <stack>
#include <string>
#include <array>
#include <math.h>
#include<bits/stdc++.h>

using namespace std;

void rotate(int **matrix, int size)
{
    int tempValue;
    for(int layer=0; layer<size/2; layer++)
    {
        int first = layer;
        int last = size - 1 - layer;
        for(int j=layer; j<last; j++)
        {
            int top = matrix[first][j];
            
            // left to top
            matrix[first][j] = 
            
            tempValue = matrix[j][abs((size-1)-i)];
            matrix[j][abs((size-1)-i)] = matrix[i][j];
            matrix[i][j] = tempValue;
        }
    }
}

int main()
{
    //string str1 = "aaabb b ea ca3fc ca1 2";
    //string str2 = "";
    int n = 4;
    int** matrix = new int*[n];
    for(int i = 0; i < n; ++i)
        matrix[i] = new int[n];
        
    matrix[0][0]= 1;
    matrix[0][1]= 2;
    matrix[0][2]= 3;
    matrix[0][3]= 4;
    matrix[1][0]= 4;
    matrix[1][1]= 1;
    matrix[1][2]= 2;
    matrix[1][3]= 3;
    matrix[2][0]= 5;
    matrix[2][1]= 6;
    matrix[2][2]= 7;
    matrix[2][3]= 8;
    matrix[3][0]= 6;
    matrix[3][1]= 8;
    matrix[3][2]= 7;
    matrix[3][3]= 5;
    
    //matrix[n][n] = {{1,2,3,4},{4,1,2,3},{5,6,7,8},{6,8,7,5}};
    rotate(matrix,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
