//https://codeforces.com/problemset/problem/282/A
#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x=0;
    while(t--){
        string s;
        cin>>s;
        if(s=="++X" || s=="X++"){
            x++;
        }
        else x--;

    }
    cout<<x;
}