#include <iostream>

using namespace std;
/*
     OUTPUT of the code as we give input as a -> 5
        Enter number = 5
            *        *
            **      **
            ***    ***
            ****  ****
            **********
            ****  ****
            ***    ***
            **      **
            *        *
                          */

void Print(int n)
{
    int inispace = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;
        // star
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= inispace; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }

        cout << endl;
        if (i < n)
            inispace -= 2;
        else
            inispace += 2;
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