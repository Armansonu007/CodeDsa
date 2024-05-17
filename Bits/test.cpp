#include <iostream>
#include <algorithm> // for std::max
using namespace std;

int main() {
    // Corrected array initialization
    int arr[] = {2, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mx = 0; // Initializing mx to 0

    // Loop to find the maximum XOR value
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int temp = arr[i] ^ arr[j];
            mx = max(mx, temp);
        }
    }

    cout << mx;
    return 0;
}
