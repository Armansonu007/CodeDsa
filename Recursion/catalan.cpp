#include<iostream>
using namespace std;
int func(int n){
    //base case 
    if(n<=1){
        return 1;
    }
    int res=0;
    for(int i=0;i<n;i++){
        res+=func(i)*func(n-i-1);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int res=func(n);
    cout<<res;
}