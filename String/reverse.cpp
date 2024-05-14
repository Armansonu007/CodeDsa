#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    
    //using stack 
    //time complexities will gonna take place O(N) space and time O(N)
    string  ans;
    int l= 0;
    int n=str.size()-1;
    stack<char> st;
    for(auto c : str){
        st.push(c);
    }
    while(!st.empty()){
        char tp=st.top();
        ans.push_back(tp);
        st.pop();
    }
    cout<<ans;
   
    cout<<str;
    return 0;
}