#include <iostream>

using namespace std;
/*
     OUTPUT of the code as we give input as a -> 5
        Enter number = 5
            555555555
            544444445
            543333345
            543222345
            543212345
            543222345
            543333345
            544444445
            555555555
                          */

void Print(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right)));
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