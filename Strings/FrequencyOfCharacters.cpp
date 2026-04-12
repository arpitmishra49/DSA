#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;

    int freq[256] = {0};

    // Count frequency of each character
    for (char ch : str) {
        freq[ch]++;
    }

    int result = 0;

    // Apply formula
    for (int i = 0; i < 256; i++) {
        int k = freq[i];
        result += (k * (k + 1)) / 2;//yis=gf
    }

    cout << "Number of substrings: " << result << endl;

    return 0;
}