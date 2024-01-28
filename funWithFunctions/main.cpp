#include <iostream>

using namespace std;

void getAnIntFromTheUser() {
    int userinteger;
    cout << "Enter an integer: " << endl;
    cin >> userinteger;
    cout << "You entered: " << userinteger << endl;
}

void compareTwoInts() {
    cout << "Enter two integers: " << endl;
    int firstinteger, secondinteger;
    cin >> firstinteger >> secondinteger;
    if (firstinteger == secondinteger) {
        cout << "The integers are equal." << endl;
    } else if (firstinteger > secondinteger) {
        cout << "The larger integer is " << firstinteger << endl;
    } else {
        cout << "The larger integer is " << secondinteger << endl;
    }
}


void sumTwoInts() {
    cout << "Enter two integers: " << endl;
    int someinteger, anotherinteger;
    cin >> someinteger >> anotherinteger;
    cout << "The sum of " << someinteger << " and " << anotherinteger << " is " << someinteger + anotherinteger << endl;

}

int main() {

    getAnIntFromTheUser();
    compareTwoInts();
    sumTwoInts();
    return 0;

}
