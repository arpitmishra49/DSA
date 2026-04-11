#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'm') {
        cout << "Character is between a and m" << endl;
    } 
    else if (ch >= 'n' && ch <= 'z') {
        cout << "Character is between n and z" << endl;
    } 
    else {
        cout << "Not a lowercase alphabet letter" << endl;
    }

    return 0;
}