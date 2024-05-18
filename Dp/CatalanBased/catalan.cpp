#include <iostream>
#include <vector>
using namespace std;

// Global memoization vector to store intermediate results
vector<int> memo;

int func(int n) {
    // Base case: Catalan number for 0 or 1 is 1
    if (n <= 1) {
        return 1;
    }

    // If the result is already computed, return it
    if (memo[n] != 0) {
        return memo[n];
    }

    // Initialize result for this computation
    int res = 0;

    // Calculate the Catalan number using the recursive formula
    for (int i = 0; i < n; i++) {
        res += func(i) * func(n - i - 1);
    }

    // Store the computed result in the memoization vector
    memo[n] = res;

    return res;
}

int main() {
    int n;
    // Input the value of n
    cin >> n;

    // Resize the memoization vector to hold results for all values up to n
    memo.resize(n + 1, 0);

    // Calculate the nth Catalan number
    int res = func(n);

    // Output the result
    cout << res << endl;

    return 0;
}
