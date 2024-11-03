#include <iostream>

using namespace std;
/*
     OUTPUT of the code as we give input as a -> 5
        Enter number = 5
        A B C D E 
        A B C D 
        A B C 
        A B 
        A 
                */

void Print(int n)
{
     for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + (n - i); ch++)
        {
            cout << ch << " ";
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