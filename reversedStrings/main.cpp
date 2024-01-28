#include <iostream>
#include <string>       // used for string class
#include <algorithm>    // used for reverse function

using namespace std;    // used for cout, cin, endl

int main() {
    string name;                            // declare string variable
    cout << "Enter any string." << endl;
    cin >> name;                            // get user input
    string reversed = name;                 // copy string
    reverse(reversed.begin(), reversed.end());  // reverse string
    cout << "Original: " << name << endl;
    cout << "Reversed: " << reversed << endl;

    return 0;
}
