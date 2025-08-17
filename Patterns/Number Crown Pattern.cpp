#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
    int spaces = 2 * (n - 1);

    // Outer loop for the number of rows.
    for (int i = 1; i <= n; i++) {
        // for printing numbers in each row
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // for printing spaces in each row
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // for printing numbers in each row
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;  // ✅ print new line for each row
        spaces -= 2;   // ✅ decrease spaces for next row
    }
}

int main() {
    int n = 5;
    pattern(n);
    return 0;
}
