#include <iostream>
using namespace std;

int main()
{
    int rows = 4, cols = 5;
    int a[4][5];

    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    int num = 1;

    while(top <= bottom && left <= right)
    {
       
        for(int i = left; i <= right; i++)
            a[top][i] = num++;
        top++;

        for(int i = top; i <= bottom; i++)
            a[i][right] = num++;
        right--;

        
        if(top <= bottom)
        {
            for(int i = right; i >= left; i--)
                a[bottom][i] = num++;
            bottom--;
        }

     if(left <= right)
        {
            for(int i = bottom; i >= top; i--)
                a[i][left] = num++;
            left++;
        }
    }

    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }

    return 0;
}