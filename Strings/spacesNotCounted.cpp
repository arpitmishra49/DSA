#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int count = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') { // ignore spaces
            count++;
        }
    }

    cout << "Length without spaces: " << count << endl;

    return 0;
}