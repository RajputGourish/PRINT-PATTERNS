#include <iostream>

using namespace std;
/*
     OUTPUT of the code as we give input as a -> 5
        Enter number = 5

            *
            **
            ***
            ****
            *****
            ****
            ***
            **
            *
                    */
void print(int n)
{
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        int start = i;
        if (i > n)
        {
            start = (2 * n) - i;
        }
        for (int j = 0; j < start; j++)
        {
            cout << "*";
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
