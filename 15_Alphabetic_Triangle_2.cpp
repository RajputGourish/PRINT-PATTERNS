#include <iostream>

using namespace std;
/*
     OUTPUT of the code as we give input as a -> 5
        Enter number = 5
        A
        BB
        CCC
        DDDD
        EEEEE
                */

void Print(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
        }

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