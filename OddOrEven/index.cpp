#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "The given number " << n << " is Even.";
    } else {
        cout << "The given number " << n << " is Odd.";
    }

    return 0;
}
