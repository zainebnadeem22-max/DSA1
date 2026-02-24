#include <iostream>
using namespace std;

int main()
{
    int rows = 7;      
    int cols = 11;     

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= cols; j++)
        {
            
            if(j == 2 || j == cols-1 || j == i+1 || j == cols-i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}