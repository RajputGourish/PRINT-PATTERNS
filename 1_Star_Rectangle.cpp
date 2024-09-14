#include <iostream>

using namespace std;

/*      
        *****
        *****
        *****
        *****
        *****
          ^  Pattern shows in Code Output
*/

void Pattern1(int n){   // here, n is the number of lines to print

    for (int i = 0; i < n; i++){    // this loop 'i' Code print the Rows

        for (int j = 0; j < n; j++){    // this loop 'j' Code print the column
            
            cout << "*";        // print the star character -> '*'

        }
        cout << endl;   // This Code is for print in next line 
    }
}
int main()
{
    int n;
    cin>>n;     // Enter how many lines(rows and column) you want to print!
    Pattern1(n);    
    
    return 0;
}