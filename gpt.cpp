#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 5; i++) {      // Outer loop (controls the rows)
       // Inner loop (controls the number of stars in each row)
            cout << "*";
        
               // Move to the next line after printing stars for the current row
    }

    return 0;
}
