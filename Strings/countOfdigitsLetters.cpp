#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int digits = 0, vowels = 0, special = 0;

    for (char ch : str) {
        if (isdigit(ch)) {
            digits++;
        }
        else if (isalpha(ch)) {
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            }
        }
        else if (!isspace(ch)) {
            special++; // not letter, digit, or space
        }
    }

    cout << "Digits: " << digits << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Special characters: " << special << endl;

    return 0;
}