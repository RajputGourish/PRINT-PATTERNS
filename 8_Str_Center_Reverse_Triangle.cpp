#include <iostream>
#include <vector>
using namespace std;
/*
     OUTPUT of the code as we give input as a -> 5
        Enter number of lines = 5

            *********
             *******
              *****
               ***
                *
                    */
void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter number of lines = ";
    cin >> n;
    print(n);
    return 0;
}