#include<iostream>
#include<string>
#include<algorithm> // Include <algorithm> header for reverse function
using namespace std;

int main() {
    int num;
    cin >> num;
    string ans = "";
    while (num > 0) {
        int temp = num % 2;
        ans.push_back(temp + '0'); // Convert integer to character
        num = num / 2;
    }
    // Reverse the string to get the correct binary representation
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}
