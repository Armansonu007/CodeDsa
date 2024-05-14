#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string str = "I am Arman";
    int n = str.size();
    stack<string> st;
    string temp = "";
    string ans = "";
    for(int i = 0; i < n; i++){
        if(str[i] != ' '){
            temp += str[i];
        }
        else if(str[i] == ' '){
            st.push(temp);
            temp = ""; // Reset temp after pushing onto the stack
        }
    }
    // Push the last word onto the stack
    st.push(temp);
    while(!st.empty()){
        ans += st.top() + ' ';
        st.pop();
    }
    // Remove the extra space at the end
    cout << ans.substr(0, ans.size() - 1);
    return 0;
}
