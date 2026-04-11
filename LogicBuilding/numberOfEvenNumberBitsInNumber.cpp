#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int num = i;
        int count = 0;

        while (num > 0) {
            if (num & 1)  // check last bit
                count++;
            num = num >> 1; // right shift
        }

        if (count % 2 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}