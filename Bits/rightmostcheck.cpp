#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    for(int i = 3; i >= 0; i--) { // 1. Decrement i instead of incrementing it
        cout << ((n >> i) & 1);
    }
}
