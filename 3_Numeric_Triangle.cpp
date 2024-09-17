#include <iostream>

using namespace std;

/*

            1
            1 2
            1 2 3
            1 2 3 4
            1 2 3 4 5
                ^       This is the Output of the Code
*/

void Pattern3(int n) {   // 'n' is the number of line

    for (int i = 1; i <= n; i++) {   // this outer loop is for rows
    
        for (int j = 1; j <= i; j++) { // this inner loop is for columns
        
            cout << j << " ";  // this print the value of 'j'
        }
        cout << endl;   // this print next line
    }
}

int main(){
    int n;
    cin>>n;  // Enter the number of lines 

    Pattern3(n);

    return 0;
}