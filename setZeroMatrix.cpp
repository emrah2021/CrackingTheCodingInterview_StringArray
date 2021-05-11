#include <stdio.h>
#include <iostream>
#include <stack>
#include <string>
#include <array>
#include <math.h>
#include<bits/stdc++.h>

using namespace std;

void setZero(int **matrix,int row, int col)
{
    int* rows = new int[row];
    int* columns = new int[col];
    
    for(int i=0;i<row; i++)
    {
        for(int j=0;j<col;j++)
        {
            if(matrix[i][j] == 0)
            {
                rows[i] = 1;
                columns[j] = 1;
            }
        }
    }
    for(int i=0;i<row; i++)
    {
        for(int j=0;j<col;j++)
        {
            if((rows[i] == 1 || columns[j] == 1))
            {
                matrix[i][j] = 0;
            }
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
    matrix[1][1]= 0;
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
    setZero(matrix,n,n);
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
