#include <iostream>

using namespace std;

/*
            1
            2 2
            3 3 3
            4 4 4 4
            5 5 5 5 5
                ^     This pattern print in Output
*/

void Pattern4(int n){   // n is the number of line
    for (int i = 1; i <= n; i++) {   // this outer loop is for rows
    
        for (int j = 1; j <= i; j++) {   // this inner loop is for columns 
        
            cout << i << " ";       // this print the value of 'i'
        }
        cout << endl;   // This line code print NEXT LINE
    }
}
int main()
{
    int n;
    cin >> n; // Enter the number of lines

    Pattern4(n);

    return 0;
}