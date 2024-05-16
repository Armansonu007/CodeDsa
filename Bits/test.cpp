#include<iostream>
#include<string>
#include<algorithm> 
#include<queue>
using namespace std;

int main() {
    int num;
    cin >> num;
    queue<int> ans;
    while (num > 0) {
        int temp = num % 2;
        ans.push_front(temp); 
        num = num / 2;
    }
    // Reverse the string to get the correct binary representation
   
    for(auto i: ans){
        cout<< i ;
    }
    return 0;
}
