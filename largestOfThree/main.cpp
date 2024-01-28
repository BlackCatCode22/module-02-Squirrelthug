#include <iostream>

using namespace std;

void largestofthree() {
    int a, b, c;
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        // added in the = to make it so that if two numbers are the same it will still work
        // otherwise it has a chance to dismiss the largest numbers for not being greater than
        cout << "Largest number is: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "Largest number is: " << b << endl;
    } else {
        cout << "Largest number is: " << c << endl;
    }

}

int main() {
    largestofthree();
    return 0;
}
