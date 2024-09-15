#include <iostream>

using namespace std;

/*
            *
            **
            ***
            ****
            *****
             ^  Pattern shows in Code Output

*/

void Pattern2(int n) { // here, n is the number of lines to print

    for (int i = 0; i < n; i++)  {   // this loop 'i' Code print the Rows 

        for (int j = 0; j <= i; j++) {   // this loop 'j' Code print the column 
        
            cout << "*";    //  print the star character -> '*'
        }

        cout << endl;  // this Code is for next line
    }
}
int main()
{
    int n;
    cin>>n;     // Enter the value of n, where n is the number of lines
    Pattern2(n); 

    return 0;
}