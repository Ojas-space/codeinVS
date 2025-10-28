#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, c, n, i = 1;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci sequence: ";
    while (i <= n) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    cout << endl;
    return 0;
}
