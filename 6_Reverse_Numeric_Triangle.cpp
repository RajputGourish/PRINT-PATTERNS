#include <iostream>
#include <vector>
using namespace std;
/*      
     OUTPUT of the code as we give input as a -> 5
        Enter number of lines = 5

        1 2 3 4 5
        1 2 3 4
        1 2 3
        1 2
        1
                    */

void print(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << col;
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