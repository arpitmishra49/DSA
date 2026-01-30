#include<iostream>
using namespace std;

int main() {
    int n = 10;
    int arr[10] = {1,3,4,3,4,5,6,7,9,3};

    for (int i = 0; i < n; i++) {
        int freq = 0;

        // Count total frequency of arr[i]
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }

        // Print only once for each number
        bool printedBefore = false;
        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                printedBefore = true;
                break;
            }
        }

        if (!printedBefore && freq % 2 != 0) {
            int sum = arr[i] * freq;
            cout << sum << " ";
        }
    }
}
