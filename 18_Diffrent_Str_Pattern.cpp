#include <iostream>

using namespace std;
/*
     OUTPUT of the code as we give input as a -> 5
        Enter number = 5
            **********
            ****  ****
            ***    ***
            **      **
            *        *
            *        *
            **      **
            ***    ***
            ****  ****
            **********
                          */

void Print(int n)
{
    int inispace = 0;
    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < inispace; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        inispace += 2;
        cout << endl;
    }
    inispace = 2 * n - 2;
    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < inispace; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        inispace -= 2;
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter number of lines = ";
    cin >> n;
    Print(n);
    return 0;
}