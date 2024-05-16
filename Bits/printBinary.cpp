#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    //there are three approach to do this 
    //1st one binary based 
    for(int i = 3; i >= 0; i--) { 
        cout << ((n >> i) & 1);
    }
    /*2nd one binary based just little bit logic change
    for (int i = 4; i >= 0; i--) {
        if (((1 << i) & n) != 0) 
            cout << 1<<endl;
        else
            cout << 0<<endl;
    }
    */
    /*3rd one is mathematical division approach
    here what you are gonna doing that every time you get the 
    remainder store in the some temp variable and then
    put in some storage variable either in string or queue 
    and divide it by 2 ,  
    repeat the process until it becomes zero.
    and just return answer 

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
    */
}
