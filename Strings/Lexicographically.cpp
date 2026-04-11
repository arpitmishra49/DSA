#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1 == s2)
        cout << "Equal";
    else if (s1 < s2)
        cout << s1 << " comes before " << s2;
    else
        cout << s1 << " comes after " << s2;

    return 0;
}