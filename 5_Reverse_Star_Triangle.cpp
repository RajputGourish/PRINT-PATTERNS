#include <iostream>
using namespace std;

/*       OUTPUT of the code as we give input as a -> 5
    Enter number of lines = 5

            *****
            ****
            ***
            **
            *
                    */
void print(int n)
{
    for(int row = 1; row <= n; row++){
        for (int col = row; col <= n; col++)
        {
            cout<<"*";
        }
        cout<<endl;
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